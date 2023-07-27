#Algorithms

🖼 Understanding the ORDER (speed) of Algorithms given n added elements
Omega notation - lower bound? How many steps early we finish
Think of action in terms of cost (wrt to O notation list)
Think in terms of best case and worst case for each algorithm

WE use O (big O notation) to describe the upper bound of an algorithms time complexity
The upper bound is the greatest number of steps is takes to complete
So essentially, we are always rating algorithms by their slowest possible steps to completion
OR rather how to runtime of the algorithm grows in relation to size of the input

---

Logarithmic Algorithms

- Quick
- Merge
- Heap

Quadratic Algorithms

- Bubble
- Selection
- Insertion
- Gnome, shaker, odd even, pancake

---

RAM is a grid of bytes

Array of memory
Consider an array as a series of closed doors where the PC needs to check these 1 at a time to find an item

input → [] → output (inside the box can be different Algorithms)

- LINEAR SEARCH

  - Simple for loop
  - Left → Right
  - If i == 50 return true (1) bool;

- BINARY SEARCH (Phone book example)

```bash

```

note: the array was sorted which helps speed

We want to get a rough idea of how speedy our Algo's are

```bash
    O(n²) selection sort
    O(n log n) merge sort
    O(n) linear search (e.g n at a time)
    O(log n) binary search (e.g 2 is just divided something again and again)
    O(1)
```

- Omega - lower bound (how few steps may an algo take)
- Every Algo has a theoretical upper bound and lower bound

Worst Case O(n)
Best Case Ω(1)

Omega is the notation used to describe the (best case) scenario of an algorithm

---

"Implement" meaning code out the algorithm given a problem

How we define something similar to an Object in C
Note: C is not OOP

```bash
    typedef struct
    {
        string name;
        string number;
    }
    person;
```

How to set a variable inside this struct?

```bash
    person people[2]; // size of array

    people[0].name = "John Wick";
    people[0].number = "+1-800-Dinosaur";

    people[1]. etc etc;
```

---

#SORTING

There are lots of ways to sort (things like an unordered list)

- SELECTION SORT
  - Selecting the smallest element and putting it in place
  - Swapping elements
  - Order of n^2 steps (When n gets large thats when you have to be smarter)

```bash
    For i form 0 to n-1
        Find smalled number between numbers[i] and numbers[n-1]
        Swap smallest number with numbers[i]
```

- BUBBLE SORT 🛁
  - Largest elements bubble their way to the top
  - great if array is already sorted

```bash
    Repeat n-1 times (do n-1 things)
        For i from 0 to n-2 (n-1 times)
            IF numbers[i] and numbers[i+1] out of order
                Swap them
```

n-2 (secon to last person)
Asymptotically (meaning approaching infinity)

- CONCEPT: RECURSION

Ability of a function to call itself

- MERGE SORT 🫂
  - Technically uses more memory
    - image needed another row of memory where in other cases things were just swapped in the same array
    - Here we are sort of making a new array
  - Never looping back again
  - Left half - right half - divide & conquer
    - left half of left half, right half of left half etc etc...

```bash
    if only one number
        Quit
    Else
        Sort left half of numbers
        Sort right half of numbers
        Merge sorted halves

```

CONCLUSION:

Running times include tradeoffs
Most programmers are not implementing the algorithm themselves they are using a library with off-the-shelf algorithms

If you want to use less time you have to pay a price (time or space(memory))

Back in the day space was expensive
