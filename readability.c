#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char book[100000];
    float index, L=0, S;
    printf("Enter the story\n");
    fgets(book, sizeof(book), stdin);
    float number_of_words = 1;
    float number_of_sentences = 0;
    float L1 = 0;
    for (int i = 0; i < strlen(book); i++)
    {
        if (book[i] == ' ')
        {
            number_of_words += 1;
        }
        else if (book[i] == '.' || book[i] == '?' || book[i] == '!')
        {
            number_of_sentences += 1;
        }
        else if (ispunct(book[i]))
        {
            continue;
        }
        else if (isalpha(book[i]))
        {
            L1 += 1;
        }
    }
    S = (number_of_sentences / number_of_words) * 100;
    L = (L1 / number_of_words) * 100;
    index = (0.0588 * L) - (0.296 * S) - 15.8;
    if (index < 1)
    {

        printf("Before Grade 1");
    }

    else if (index >= 16)
    {

        printf("Grade 16+");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
    // printf("Grade %d\n", (int)index);}
    return 0;
}