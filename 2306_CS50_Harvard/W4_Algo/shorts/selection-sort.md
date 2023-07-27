# Selection Sort

❗️ Find the smallest unsorted element and add it to the end of the sorted list.(\*)

```bash
    - Repeat until no unsorted element remain:
        - Search the unsorted part of the data to find the smallest value
        - Swap the smallest found value with the first element of the unsorted part(*)
```

(\*) same thing

- Worst case aka Upper bound:

WE have to interate over each of the N elements of the array (to find the smallest unsorted element)
AND we must repeat this n times once for each element as we only sort one element at a time (since only one element gets sorted on each pass)

tldr - we have to iterate through each iteration
tldr - n steps, n times

O(n^2)

- Best-case scenario aka Lower Bound:

The same - theres no way to guarantee the array is sorted until we go through this process
for all the elements.

It still tries to do the swaps

Omega(n^2)
