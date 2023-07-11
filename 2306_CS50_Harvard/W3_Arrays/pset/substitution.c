#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string sub(string word, string key);

int main(int argc, string argv[])
{

    if ((argc != 2) || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Length of string
    int len = strlen(argv[1]);

    for (int i = 0; i < len; i++)
    {
        // if (!isalpha(argv[1][i])) || if ((argv[1][i]) == (argv[1][i+1]))
        if (!isalpha(argv[1][i]) || (argv[1][i] == argv[1][i + 1]))
        {
            return 1;
        }
        // check for duplicates - nested loop
        // convert all letters to upper or lower
        for (int j = i + 1; j < len; j++)
        {
            if ((argv[1][i]) == (argv[1][j]))
            {
                return 1;
            }
        }
    }


    string plaintext = get_string("plaintext: ");
    string cipher = sub(plaintext, argv[1]);
    printf("ciphertext: %s\n", cipher);
    return 0;
}

string sub(string word, string key)
{
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (isupper(word[i]))
        {
            word[i] = toupper(key[word[i] - 'A']);
        }
        if (islower(word[i]))
        {
            word[i] = tolower(key[word[i] - 'a']);
        }
        else
        {
            word[i] += 0;
        }
    }
    return word;
}

//
// 🪦

// int len = strlen(argv[1]);
// if (len != 26)
// {
//     printf("Key must contain 26 characters.\n");
//     return 1;
// }

// for (int i = 0; i < len; i++)
// {
//     if ((argv[1][i]) == (argv[1][i+1]))
//     {
//     return 1;
//     }
// }

// for (int i = 0; i < strlen(argv[1]); i++)
// {
//     // if (!isalpha(argv[1][i])) || if ((argv[1][i]) == (argv[1][i+1]))
//     if (isupper(argv[1][i]) >= 65 || isupper(argv[1][i]) >= 90)
//     {
//     return 1;
//     }
// }

// for (int i = 0; i < strlen(argv[1]); i++)
// {
//     // if (!isalpha(argv[1][i])) || if ((argv[1][i]) == (argv[1][i+1]))
//     if (islower(argv[1][i]) >= 97 || islower(argv[1][i]) >= 122)
//     {
//     return 1;
//     }
// }