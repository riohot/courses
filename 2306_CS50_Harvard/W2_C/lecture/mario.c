#include <stdio.h>
#include <cs50.h>

// HOISTING- call the function at the top of the page
int get_size(void);
void print_grid(int size);

// row
//  int main(void)
//  {
//      for (int i = 0; i < 4; i++)
//      {
//          printf("?");
//      }
//      printf("\n"); // placed outside the loop
//  }

// for a column you would use \n inside the loop

// print a n by n grid
// basically you have a loop and then you want to loop that loop
// for this example specify \n
// Try to keep tabs on where the loops end syntactically

// New version using functions. Super sleek 💅

int main(void)
{
    // get size of grid
    int f = get_size();
    // print grid
    print_grid(f);
}




// int main(void)
// {
//     // do while loop. good for recursive questions that loop until requirement met
//     // flips the order of a regular loop
//     int num;
//     do
//     {
//         num = get_int("Enter a number: ");
//     }
//     while (num < 1);

//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < num; j++)
//         {
//             {
//                 printf("?");
//             }
//         }
//         printf("\n");
//     }
// }

// Do while loop e.g for recursive questions

// FUNCTIONS - created outside the main. Need to be hoised up top.

int get_size(void)
{
    int f;
    do
    {
        f = get_int("Size?: ");
    }
    while (f < 1);
    return f; // hand it back to when we a creating a variable assignment as function
}

// void = has no output
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("?");
        }
        printf("\n");
    }
}