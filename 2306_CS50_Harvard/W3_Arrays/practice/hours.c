#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    // input for weeks
    int weeks = get_int("Number of weeks taking CS50: ");
    // put that input into hours array
    int hours[weeks];

    // loop to ask questions about the individual weeks based on how many weeks you entered above
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    // do while loop to get T or A as response
    char output;
    do
    {
        // toupper auto returns true if you already put in a capital letter
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    // crux of the code
    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    if (output == 'T')
    {
        int total = 0;
        for (int i = 0; i < weeks; i++)
        {
            total += hours[i];
        }
        return (float) total;
    }
    else
    {
        float average = 0;
        for (int i = 0; i < weeks; i++)
        {
            average += hours[i];
        }
        return (float) average / (float) weeks;
    }
}