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



   for (int row = 1; row <= height; row++)
   {
        // print space as how many rows left
        for (int i = 1; i <= height - row; i++)
        {
            printf(" ");
        }

        // print # for each row
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }

   //new line
   printf("\n");
   }
}

