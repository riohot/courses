# Arrays 🦆

_Containers used to store multiple values_

--

Encryption - anything that keeps data secure. There are different levels.

Compilers - CLANG, GCC

command line arguments

- -o (output)
- -l (library) for any imported library

# Compiling

Compiling (Make)

1. pre-processing
   e.g #include.. - conversion of headers

2. compiling
   Code converted to Assemley code

3. assembling
   code conversion to machine code (binary)

4. linking
   links your binary code + library codes

# decompling

Reversing the process
Likely to be a mess as loops, vars,

~ Debugger (How to use with Python & JS)

Aside: Scope

```bash
    {
    variable defined here can be used anywhere inside the related curly braces
    {
        variable defined here can only be used anywhere inside the related curly braces
    }
}
```

Aside: Do While loop

do {code} while (condition = true)
is the condition you've plugged into the ( ) true?? If so the code runs again
it only breaks when the condition is NOT true

e.g if we want positive numbers the ( ) code should keep looping when it receives positive numbers i.e while (n > 0);

---

- Bit allocation

bool - 1 1byte
int - 4bytes
long - 8bytes
float - 4bytes
double - 7bytes
char - 1bytes
string - ?
...

---

## Arrays

Storing a whole list of integers (or any data) in individual variables is fine when small but when you extrapolate to
50, 100 or Big Data this is technically hard and a real strain on memory
You'd have to remember the name of 50, 100, BIG number of variables - this is inefficent.

Arrays solve this

"An array is a way of stroing data b2b2b2b in a way that you can access each member easily"

```bash
    store a array of 3 (12 bytes)
    $ int scores[3];

    $ scores[0] = 72; // must start at 0
    $ scores[1] = 73; // must start at 0
    $ scores[2] = 33; // must start at 0

    or

    // global N needs to be set..
    $ for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("")
    }

    use these variables by calling the same name

    printf...
```

Note: if you find yourself writing something again and again (codesmell) thats an oppportunity to loop

# Pass arrays as functions

```bash
    $ type name(type name[]);
```

- refactoring the average of an array

```bash
    // initialise array in a function rather than a single var
    float average (int array[])
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += array[i];
        }
        return sum / (float) N;
    }
```

Note: In C you can't find the length of an array using a library like you can in JS, PY etc..

A string is just an array of characters

At the end of every string is \0 (backslash 0) which takes up one more byte

You can access individual elemnts of a string via indexing e.g

```bash
    string s = "H!"
    s[0] = H; etc
```

- Array inception

```bash
    string words [2];

    words[0] = "HI!";
    words[1] = "Byte!";

    printf(%c%c%c%c\n, words[0][1]); // would be I
```

You can find the length of a string but not an array in C

```bash
    string name = get_string("Whats your name? ");

    int n = 0;
    // while loop (we dont know the length of loop)
    while (name[n] != '\0')
    {
        n++; // first n was global so it can be manipulated in here
    }
    printf("%i", n)
```

-

Libraries - Dont Reinvent the wheel 🛞 Most problems have been done already

string.h

- A library of string related functions
- strlen aka var = strlen(var )

ctype.h

- A library of data type functions

e.g this example of turning contents of a string from lowercase to upper

---

_COMMAND LINE ARGUMENTS_

Typing in command line, waiting for program to run, then ask Q can get tedioud

int main(void) of course means the program takes no arguments
So what happens when we DO substitute arguments into it;

    ```bash

int main(int argc, string argv[])
{
printf("hello, %s\n", argv[1]);
$ argv[0] = file name
}

```

--

echo $
command line arguments return 0;
you could return 1 on a successful


---

# Cryptography

     key  → [             ] →
plaintext → [cipher (algo)] → ciphertext

e.g add +N value to Alphabet character

```

---

🪲

- Step over - step over code
- Step into - step into a function to see whats going wrong
