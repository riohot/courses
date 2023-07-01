#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
int g = get_size();
print_grid(g);
}



int get_size(void)
{
    int m;
    do
    {
        m = get_int("Height?: ");
    }
    while (m < 1 || m >= 8);
    return m;
}


void print_grid(int size)
{
     for (int i = 0; i < size; i++)
    {
        // columns
        for (int j = 0; j < size; j++)
        {
            if ((i + j) < (size - 1))
            printf("  ");
            else
            printf("#");
        }
        printf(" ");
        for (int q = 0; q < size; q++)
        {
            if ((i + q) >= (size - 1))

            printf("#");
        }
        printf("\n");
    }
}