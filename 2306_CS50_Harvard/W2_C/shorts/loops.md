# Loops

Loops allow your programs to execute lines of code repeatedly, saving you from needing to copy and paste or otherwise repeat line of code

WHILE LOOP
(Unlimited)

- Use when you want a loop to repeat an unknown number of times and possibly not at all
  e.g. control flow for a game (sprites moving etc)

DO-WHILE
(Unknown)

- Use when you want a loop to repeat an unknown number of times, but AT LEAST ONCE
  e.g. Input (with good faith)

FOR
(Number tbd)

- Use when you want a loop to repeat a discrete number times, you you may not know the number the moment the program is compiled.
  e.g. prompt user for input

Note: Most are interchangable

---

- Infinite loop

```bash
    while (true)
    {
        // do code
    }
```

```bash
    while (bool)
    {
        // code will run until bool = false
    }
```

# Do while

- Does the code until bool is false

```bash
    do
    {
    // code runs until bool = 0/false
    }
    while (bool);
```

# For loop

- General use case is: You want to repeat something a specific amount of time.

```bash
    for (int i = 0; i < N; i++)
    {
        / code
    }
```
