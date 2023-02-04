#include <stdio.h>
#include <cs50.h>

int main(void)
{
// get user name from user
    string name = get_string("What's your name? ");
    printf("hello, %s!\n", name);
}