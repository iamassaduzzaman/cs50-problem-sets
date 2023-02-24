// includes
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

// declaring print_bulb function type
void print_bulb(int bit);

int main(void)
{
    // get message from user
    string message = get_string("Message: ");


    for (int i = 0; i < strlen(message); i++)
    {
        // convet each character to decimal
        unsigned char byte = message[i];

        // convert each decimal number to equivalent binary
        int binary[BITS_IN_BYTE];
        int quotient = byte;
        int remainder;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            remainder = quotient % 2;
            binary[j] = remainder;
            quotient /= 2;
        }

        // reverse the order of binary array and call the print_bulb function for ecah value
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            print_bulb(binary[j]);
        }

        printf("\n");
    }

}

// function for light and dark emoji
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
