// includes
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// funtion to check password strength
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// Boolean function to check whether the pasword have at least one uppercase letter, lowercase letterm number and symbol
bool valid(string password)
{
    bool is_lower = false;
    bool is_upper = false;
    bool is_number = false;
    bool is_special_character = false;

    for (int i = 0; i < strlen(password); i++)
    {
        if (islower(password[i]))
        {
            is_lower = true;
        }

        if (isupper(password[i]))
        {
            is_upper = true;
        }

        if (isdigit(password[i]))
        {
            is_number = true;
        }

        if (!isalnum(password[i]))
        {
            is_special_character = true;
        }
    }

    if (is_lower == true && is_upper == true && is_number == true && is_special_character)
    {
        return true;
    }

    return false;
}
