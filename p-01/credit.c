// includes
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    // input card number
    long card_number = get_long("Number: ");

    // calculate the length
    int l = 0;
    long number = card_number;
    do
    {
        number = number / 10;
        l++;
    }
    while (number > 0);

    // check whether length is valid
    if (l != 13 && l != 15 && l != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // calculate sum
    int sum1 = 0, sum2 = 0, total = 0, last1, last2, d1, d2;
    long x = card_number;

    do
    {
        // remover last digit of the number
        last1 = x % 10;
        x /= 10;
        sum1 += last1;

        // remove second last digit
        last2 = x % 10;
        x /= 10;
        last2 *= 2;
        d1 = last2 % 10;
        d2 = last2 / 10;
        sum2 = sum2 + d1 + d2;
    }
    while (x > 0);
    total = sum1 + sum2;

    // checking luhn algorithm
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // get starting two digit
    long start = card_number;
    do
    {
        start /= 10;
    }
    while (start > 100);

    // checking starting digit for CARD type
    if ((start / 10 == 5) && (start % 10 > 0 && start % 10 < 6)) // check if card is MASTERCARD
    {
        printf("MASTERCARD\n");
        return 0;
    }
    else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7)) // check if card is AMEX
    {
        printf("AMEX\n");
        return 0;
    }
    else if (start / 10 == 4) // check if the card is VISA
    {
        printf("VISA\n");
        return 0;
    }
    else // otherwise card is INVALID
    {
        printf("INVALID\n");
        return 0;
    }

    return 0;
}