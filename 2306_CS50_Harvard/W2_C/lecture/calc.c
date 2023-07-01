#include <cs50.h>
#include <stdio.h>

// counter integer overflow
// long uses 64bits(8 bytes)

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li\n", x + y);
}

// get_float