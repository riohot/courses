#Binary Search

DIVIDE AND CONQUER
PHONEBOOK (Reducse the search area by half each time, trying to find target)
Great for large databases

- However Must be sorted first else we cant make assumptions about the order

```bash
    Repeat until the sub(array) is size 0 (if start i > end i)
        - Calculate the middle point of the current(sub)array
        - If the target is at the middle, stop
        - Otherwise, if target is less than whats at the middle, repeat, changing
        the end point to be just to the left of the middle
        - Otherwise, if the target is greater than whats at the middle, repeat,
        changing the start point to be just to the right of the middle
```

(sub)array meaning smaller segments of our initial array

- Worst-case (aka Upper Bound):

We have to divide a list of n ele,emts in half repeatedly to find the target element, either because the target element will be found at the end of the last division or doesnt exist at all

Dividing by 2 is equivalent to O(log n)

- Best-case scenario (aka Lower Bound):

The target element is at the midpoint of the full array and so we can stop looking immediately after we start

Omaga(1)

- Understanding log n

Understanding the time complexity of Binary Search

- We have an initial array. After the 1st step we divide by 2 aka n/2, then again so n/4, then again so n/8 etc etc
- The number of times we can divide by 2 until we reach 1 (end of algorithm) is represented as log base 2 of n ( log₂(n) )
- This is because 2^x = n, where x is the no. of division steps we need to do to reach 1
- Taking log of both sides we get x = log₂(n)

- THEREFORE: the time its takes to complete the binary search grows LOGARITHMICALLY with the number of elements in the input
- As teh size of array(n) increases, the number of steps required to find the target value only increases logarithmically
