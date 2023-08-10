# Memory

Bitmap (pattern of 0 and 1 where colours represent things)

RGB = 8 bits (0, 0, 255)
HEX = 0000FF or 00,00,FF

Hex implying 16

This is how to count beyond 9. Base 16

```bash
    0 1 2 3 4 5 6 7 8 9 a b c d e f
```

Therefore HEX codes are

```bash
    #     #
    16^1  16^0
    16     0
```

so 16 would be represented as '10'
F is the biggest digit

1111 = F > 4 BITS
1111 = F
11111111 = FF

1 HEX digit = ALWAYS 4 Bits
2 HEX digits = 4 + 4 bits

Every character is a byte.

Human convention for communicating HEX - 0x0

Find the address where data lives at
You can store the address in a variable

```bash
    &variable
```

GO TO the address location

```bash
    *variable
```

//--------------------------------------------

_POINTERS! 👉_

"A VARIABLE THAT POINTS AT SOMETHING ELSE" ↘️
This helps us build and construct things.

```bash
    int n = 50;
    int *p = &n; aka pointer p = &n

    printf("%p\n", p);
```

%p means print out value of a pointer vs %s which means go to address
datatype \*n; = declaring a pointer that will store an address of said variable datatype
"star n means STARt at n and go there"
& get address

Pointers are typically 8-bit

```bash
    *strings = An array of chars
```

Strings "" - shorthand for adding \0 at the end
Chars '' - doesnt do that

Variable of a string points just to the first char in memory of that string. The PC then knows to terminate at \0
Strings are the address of the first character in that sequence of chars

IN C String is basically char \*

so String == char \*s

-

HOW TO GO TO ADDRESS. Or how to figure out the address of something and then go to it

```bash
    int n = 50;
    int *p = &n;
    printf("%p\n", *p);

```

otherwise the middle line is useless

_Danger ⛔️_

People can use the address pointer to point to parts of memory they arent supposed to.

Pointer Arithmetic - with Chars

```bash
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    // overflow
    printf("%c\n", *(s+5000));
```

1:07 - important rewind

_Comparing Strings_

You cant == strings because its comparing the memory location not the contents of the variable

## How do we copy things properly

_MALLOC(n)_ #stdlib - Memory allocation

- ask for some number of bytes in advance
- it returns the first byte
- you have to remember how many bytes you asked for

_FREE_ #stlib

- Pass in same address and free up memory
- YOU MUST DO THIS in perpetually open programs

Its mid code to call a function over and over again in a loop. Especially if the answer will always be the same

```bash
    for (int i = 0; i < function(n); i++);

    should be

    for (int i = 0, n = strlen(s); i < n; i++);
```

Surely someone has made a better way of copying string rather than for looping. There is

```bash
    strcopy(x, y);
```

0️⃣ /NUL
⛔️ NULL - address 0 - nothing is ever meant to go there

```bash
    if (x == NULL)
    {
        return 1
        // end program
    }
```

🛠 VALGRIND

-Will let at your code and find memory errors @ valgrind ./file

- Things we've been taking for granted

Temporary variables 🍷 🔀 🍷?????

```bash
    void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
```

vs

```bash
    void swap(int *a, int *b) {
        int temp = *a;
        a* = *b;
        *b = temp;
    }
```

By value vs By reference (memeory Address) so the original variables dont change

\_Memory heirarchy

```bash

    machine code
    globals
    heap (malloc is taken from here) - heap overflow
    ⬇️





    ⬆️
    stack (where fns are stored) - stack overflow
```

Make sure you're getting back not null values.

```bash




    0101 - garbage values
    swap
    main
```

We can circumvent C's limits on scope

Buffer - chunk of over-memory we allocate

_Final Revelation_

old school way to get input

```bash
    int main(void)
    {
        int x;
        printf("x: ");
        // scan keyboard for input
        scanf("%i", &x);
        printf("x: %i\n", x);
    }
```

whatabout strings?

```bash
    int main(void)
    {
        //char *s = NULL;

        char s[4];

        printf("s: ");
        // strings are special. they are already address
        scanf("%s", s);
        printf("s: %s\n", s);
    }
```

But then you have memory issues as you dont know how much user is going to input. This is why get_string is good in C

👉 POINTERS can literally also point to a file on HF
fopen(file, "a") "a" = append mode
