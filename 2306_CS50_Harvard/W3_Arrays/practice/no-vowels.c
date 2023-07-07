// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    // remember index starts at 0
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    else
    {
    printf("%s\n", replace(argv[1]));
    return 0;
    }
}


string replace(string word)
{
    // initiate a as word length
    int a = strlen(word);
    // loop over word
    for (int i = 0; i < a; i++)
    {
        if (word[i] == 'a')
        {
            word[i] = '6';
        }
        else if (word[i] == 'e')
        {
            word[i] = '3';
        }
        else if (word[i] == 'i')
        {
            word[i] = '1';
        }
        else if (word[i] == 'o')
        {
            word[i] = '0';
        }
        else if (word[i] == 'u')
        {
            word[i] = 'u';
        }
    }
    return word;
}
