# Pointers

📇 POINTER IS NOTHING MORE THAN AN ADDRESS WHERE VARIABLES LIVE

• The main purpose of a pointer is to allow us to modify or inspect the location to which it points (via dereferencing)
• Pointers provide an alternative way to pass data between functions

- Recall that up to now, we have passed all data BY VALUE (with one exception)
- When we pass data by value, we only pass a copy of that data

• With Pointers we have the power to pass the actual variable itself

- That means a change that is made in one function CAN impact what happens in a different function
- Not possible before (i.e swapping in a function)

💾

- Every file on your PC lives on your disk drive, HDD, SSD etx
- Disk drives are just storage space. WE cant directly work there
- Manipulation and use of data can only take place in RAM (Random access memory) so we have to move data there
- Memory is basically a huge array of 8-bit wide bytes

🧠

```bash

    Data type | Size (in bytes)
    //-------------------------
            int | 4
            char | 1
            float | 4
            double | 8
            LL | 8
            Str | 4 or 8
            pointer | 4 or 8
```

- Similarly, each location in memory has an address

- Every element in a byre
- Every element has an address

- Once we know where a variable lives we can then work with it

👉 POINTERS - A data item whose

- value = memory address
- type describes the data located at that memory address

Allow us to pass variables through functions

Analogy - updating a notebook vs taking your notebook, copying pages and then putting those notebooks back into my notebook

📝 TO NOTE

- Pointers should always be NULL if you dont set its value immediately
- You can check whether a pointer is NULL using the ==

& - EXTRACTION - extracting value of variable already created

```bash
    int x
    &x = address of x
```

_ARRAYS_

If arr is an array of doubles, then &arr[i] == pointer to double whose value is the ADDRESS of the ith element of arr

- The name of an array is a pointer to its first element?

_CHAR_

Dereferencing - If we have a pointer-to-char called $pc then $\*pc is the data that lives at the Memory address stored inside the variable pc

SO if \*pc = 'd' (or whatever) It means we have GONE TO THAT ADDRESS and literally changed what was there

🏘 If you know your mates address that doesnt mean you ARE THERE

//--------------------------------------------

👉

```bash
    int* p;

    // We are saying that the value of p is an address
    // We can de-ref p with * operator
    // We will find there an int
```

🌟

```bash
    ❌ int* px, py, pz;
    ✅ int* pa, *pb, *pc;
```
