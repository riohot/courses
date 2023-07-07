#Arrays

- Fundamental data structure
- Hold/group of same data type at contiguous memory locations
- Each partitiion of an array is called an Element
- C array (like most languages) starts from 0 and ends at (n-1)
- C will not prevent you from going out of bounds of your array (e.g -43th / 50th)

* Declarations

type name[size];

- ⛽️ Filling up arrays

```bash
    data-type array[n(dont need this n though)] = {n1, n2, n3...}

    or

    data-type array[n];
    array[0] = x;
    array[1] = y;...
```

♟ Arrays can consist of more than a single dimension. You can have as many size specifiers as you wish.

```bash
    bool battleship[10][10];
```

Think of this at either a 10x10 grid of cells
(in memory its really just a 100-element one dimensional array)
(Mutli-dimensional arrays are great abstractions to help visualize game boards or other complex represenations)

⚠

- While we can treat individual elements of arrays as variables, we cannot treat entire arrays themselves as variables

- We cannot assign one array to another (not in C)
- We must loop to copy over the elements one at a time e.g

```bash
    int foo[5] = {1, 2, 3, 4, 5}
    int bar[5];

    for(int j = 0; j < 5; j++)
    {
        bar[j] = foo[j];
    }
```

Arrays are passed by REFERENCE not VALUE
Passed by value = makes a copy (gets it own local copy)
