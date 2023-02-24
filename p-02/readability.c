// includes
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// function declaration
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
   string text = get_string("Text: ");


   int letters = count_letters(text);
   int words = count_words(text);
   int sentences = count_sentences(text);

   // calculation
    float L = ((float)letters / (float)words) * 100;
    float s = ((float)sentences / (float)words) * 100;
    float subindex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(subindex);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

   return 0;
}



// function to count letters in a paragraph
int count_letters(string text)
{
   int total_letters = 0;
   for (int i = 0; i < strlen(text); i++)
   {
    if (isalpha(text[i]))
    {
        total_letters ++;

    }
   }
   return total_letters;
}

// function to count words in a paragraph
int count_words(string text)
{
   int total_words = 1;
   for (int i = 0; i < strlen(text); i++)
   {
    if (isspace(text[i]))
    {
        total_words ++;

    }
   }
   return total_words;
}

// function to count the sentences
int count_sentences(string text)
{
   int total_sentences = 0;
   for (int i = 0; i < strlen(text); i++)
   {
    if ((text[i]) == '.' || (text[i]) == '!' || (text[i]) == '?')
    {
        total_sentences ++;
    }
   }
   return total_sentences;
}