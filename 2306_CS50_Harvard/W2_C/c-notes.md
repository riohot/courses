# C Notes

Do while loops

- Good for recursive questions or for when you need a desired input from users who may be
  bad actors

```bash
    int n
    do
    {
        c function()
    }
    while (argument);
    return n;
```

- In C an array index starts with 0 (Similar to some other programs)

- Look at code line by line. Computers and C language is VERY literal so see where the line breaks are
- What is happening at each line
- Analyse why certain things are happening - i.e Where are the curly braces are why
- IT helps to see Scratch blocks in regular code
- A lot of code simply breaks down to conditionalities (if else...)

-

## Run C in VS Code

-

```bash
  $ install homebrew
  $ brew install mingw-w64
```

Run Code: Ctrl + option/alt + n
Code automatically compiles to working dir.

## Run CS50.h in VS Code

1. Download the CS50 source folder
2. move contents of src folder to working dir.
3. new .c file in the same folder
4. compile via cc <filename.c> -o filename cs50.c
5. run via ./hello
