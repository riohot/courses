#include <cs50.h>
#include <stdio.h>

void printPrime(int min int max);
bool prime(int number);

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
    while (min >= max);

    printPrime();

}

// chained if, if, for...
bool prime(int number)
{
    // a given
    if (number <= 1)
    {
        return false;
    }
    // a given
    if (number == 2 || number == 3)
    {
        return true;
    }
    // a given...
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    // anything else
    return true;
}

void printPrime(int min int max);
{
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}


// prime takes a number which is i and says it its true print
// prints(i) - basically takes i and runs it through a boolean
// repeats