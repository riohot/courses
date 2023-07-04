#include <stdio.h>

char fun(); // preferred to declare the function before using. 

int main()
{
    char c = fun();
    printf("character is: %c", c);
}

char fun()
{
    return 'z';
}