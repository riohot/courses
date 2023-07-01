#include <cs50.h>
#include <stdio.h>

// printf function

int main(void)
{
    string first = get_string("What's first name? ");
    string last = get_string("What's second name? ");
    printf("Hello, %s %s!\n", first, last);
}