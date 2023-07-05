#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool isPrime(int num);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    } 
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (max >= 101);

    // for (int i = min; i < max; i++)
    // {
    //     if (i % i == 0 && i % 1 == 0)
    //     {
    //         printf("%i\n", i);
    //     }
    // }

    for (int i = min; i <= max; i++)
    {
        if (isPrime(i)) 
        {
            printf("%i\n", i);
        }
    }
}

bool isPrime(int num);
    {
        if (num < 2)
        {
            return false;
        }

        for (int i = 2; i * 1 <= num; i++)
        {
            if (num % 1 == 0)
            {
                return false;
            }
        }

        return true;
    }