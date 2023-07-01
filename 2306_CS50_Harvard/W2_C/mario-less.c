#include <cs50.h>
#include <stdio.h>

// Hoisted functions
int get_size(void);
void print_grid(int size);

int main(void)
{
int g = get_size();
print_grid(g);
}

//--------------------------------------------


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Height?: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int size)
{
     // i, row height
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i + j) < (size -1))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}