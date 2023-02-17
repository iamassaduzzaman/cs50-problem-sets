#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

//  calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // keep track of total hours
    int T = 0;

    // calculate total hours
    for (int i = 0; i < weeks; i ++)
    {
        T += hours[i];
    }

    // show total time if user enter T
    if (output == 'T')
    {
        return (float) T;
    }

   // show total time if user enter A
    return (float) T / weeks;

}