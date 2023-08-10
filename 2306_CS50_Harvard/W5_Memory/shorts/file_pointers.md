# File pointers

📦 Storing persistant information/data

STDIO.h

- All of them acept FILE\* as a param except for fopen()

_fopen()_

```bash
    fopen()
    - open a file and returns a file pointer to it
    - always check the return value to make sure you font get back NULL

    FILE* ptr = fopen(<filename>,<operation>)
    FILE* ptr1 = fopen("file1.txt", "r")
    // r = read
    // w = write - will overwrite pre-existing data
    // a = append - will add to the end

    we have to restrict ourselves to one of each of the above
```

_fclose()_

```bash

    fclose(<file pointer>)

    // closes the file pointed to be the given file point
    // Cant do anything else after
```

_fgetc_ // file gets char // an r-type

```bash
    fgetc()

    char ch = fgetc(<file pointer>);
    char ch = fgetc(ptr1); // for e.g.

    // reads and returns the next char form the file pointed to and stores it in variable
    // note: r-type file so


```

// This ability when looped allows us to effectively read all characters and then we can print it

```bash
    char ch;
    while((ch = fgetc(ptr)) ! = EOF) // end of file char
        printf("%c", ch);
```

_fputc_ // w-type

```bash

    fput()
    fputc('A', ptr3);

    // writes or appends arg[0] to the pointed to file
    // must be a W-type fule

```

// CP (copy) equivalent

```bash
    char ch;
    while((ch = fgetc(ptr)) != EOF)
        fputc(ch, ptr2);

    // he we are getting Ch from one file then putting it to our other file
    // Guessing these would have been specified before hand
```

👉 FILE POINTERS

_fread()_

- Allow us to read an abritrary quanitity (unit) of (size) from the file pointed to and stores them in memory in a buffer pointed to by <buffer>
  ⛔️ The operation of the file pointer passed in as a param must be "r" or you will error

```bash
    fread(<buffer>, <size>, <qty>, <file pointer>);
```

100 at a time, 500 at a time

```bash
    int arr[10];
    fread(arr, sizeof(int), 10, ptr);

    // heap vs stack - both are buffer
    double * arr2 = malloc(sizeof(double) * 80);
    fread(arr2, sizeof(double), 80, ptr);
```

// we can treat fread like fgetc;
// recall that the 1st arg to fread is a pointer so we need to pass in the address

```bash
    char c;
    fread(&c, sizeof(char), 1, ptr);
```

_fwrite()_

-Same as read but for write
-get arbitrary amount of info, write arbitrary amount of info

//--------------------------------------------

fgets() - reads a full string from a file
fputs() - writes a full string to a file
fprintf() - writes a formatted string to a file

fseek()- allows you to rewind or fast-forward within a file - you move around a file...

ftell() - tells you what (byte) pos. you are at within a file
feof() - tells you whether you've read to end of a file
ferror() - indicates whether an error has occurred in working with a file
