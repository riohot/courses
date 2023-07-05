#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    } while (start < 9);
    

    int end;
    do
    {
        end = get_int("End size: ");
    } while (end < start);

    // any time we want to track change we make a variable  
    int years = 0;


    // repeatedly run code
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    printf("Years: %i\n", years);
}   
    
