#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number <= 1) // check whether the number is 1
    {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) // check if number is divisible by any number between 2 to number/2
    {
        if (number % i == 0) // if the number is divisible by i then its not a prime number
        {
            return false;
        }
    }

    // if the number is not divisible by any number between 2 to number/ 2, then its prime number
    return true;
}
