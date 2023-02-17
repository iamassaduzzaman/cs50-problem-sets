// includes
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // checking whether if argc is only two , less or more
    if (argc != 2)
    {
       printf("Usage: ./no-vowels word\n");
       return 1;
    }

    // the word
    string word = argv[1];

    // showing result
    string result = replace(word);
    printf("%s\n", result);

    return 0;
}

// function to replace vowels with number
string replace(string input)
{
    string output = input;

for (int i = 0; i < strlen(input); i++)
 {
        char c = tolower(input[i]);

     switch(c)
    {
        case 'a':
            output[i] = '6';
            break;

        case 'e':
            output[i] = '3';
            break;

        case 'i':
            output[i] = '1';
            break;

        case 'o':
            output[i] = '0';
            break;
    }
}

    return output;
}
