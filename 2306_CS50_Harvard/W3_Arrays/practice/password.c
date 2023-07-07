// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

// TODO: Complete the Boolean function below
bool valid(string word)
{
    bool lower = false;
    bool upper = false;
    bool number = false;
    bool symbol = false;

    int a = strlen(word);
    for (int i = 0; i < a; i++)
    {
        if (islower(word[i]))
        {
            lower = true;
        }
        if (isupper(word[i]))
        {
            upper = true;
        }
        if (isdigit(word[i]))
        {
            number = true;
        }
        if (ispunct(word[i]))
        {
            symbol = true;
        }
    }

    if (lower == true && upper == true && number == true && symbol == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}