# Dynamic Memory Allocation

- Weve only seen one way to work with pointers. Namely, pointing a pointer variable at another var
  ( This requires us to know exactly how much memory our system will need ath the moment)

BUT - What if we dont know how much well need at compile time (A la strings)

_Dynamic Memory Allocation_

We do this by allocating memory from the Heap
Anything we give a name to like a variable comes from the Stack

```bash
    text
    initialised data
    unint data
    --
    heap
    ⬇️
    ⬆️
    stack
    environmental variables
```

We get the DAM by making a call to malloc()
⛔️ Check if you got NULL

```bash
    // statically obtain an integer
    int x;

    // dynamically obtain an integer
    int *px = malloc(sizeofI(datatype));


    // regular get an integer from user
    int x = get_int();

    // array of floats on the stack
    float stack_array[x]

    // array of floats on the heap
    float* heap_array = malloc(x * sizeof(float));

```

⛔️ DAM is not auto-returned to the system for later use when the function in which its created finishes

- SO we have to free() it
- Otherwise there youll get a memory leak

```bash
    char * word = malloc(50 * sizeof(char));

    // do stuff

    free(word);
```

🥇 GOLDEN RULES

1. all malloc() must be free()
2. Only malloc()'d should be free()
3. Do NOT free() a block of memory more than once
