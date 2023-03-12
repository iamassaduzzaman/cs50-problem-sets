#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt from user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);




    for (int line = 1; line <= height ; line++)
    {
        // print white spaces
        for (int i = 0; i < height - line; i++)
        {
            printf(" ");
        }

        // print #
        for (int j = 0; j < line; j++)
        {
            printf("#");
        }

        // print white spaces
        printf("  ");



        // print #
        for (int k = 0; k < line; k++)
        {
            printf("#");
        }

        // new line
        printf("\n");
    }




}

