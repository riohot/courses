#Bubble Sort

🛁 We want to move higher value elements towards the right
🛁 We want to move lower value elements generally towards the left

Builds array from Right to left (Largest down to smallest) opposite of selection sort

```bash
    - Set swap counter to a non-zero value
    - Repeat until the swap counter is 0
        - reset swap counter to 0
        - look at adjacent pair
            - if two elements are not in order swap them and add one to the swap counter
```

WORST CASE AKA UPPER BOUND

- The array is in reverse order, we have to "bubble" each of the n elements all the wya across the array
  and since we can only fully bubble one element into position per pass/iteration we must do this N times

O(n^2)

Best CASE AKA LOWER BOUND

- The array is already perfectly sorted and we make no swaps on the first pass

Omega(n)

in the best case this is better than selection sort...

But less efficient then merge sort or quicksort
