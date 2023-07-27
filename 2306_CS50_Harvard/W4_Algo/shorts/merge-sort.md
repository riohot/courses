# Merge Sort

- In merge sort the idea of the algorithm is to sort smaller arrays and then combine those arrays together (merge them) in sorted
  order

- Merge sort leverages RECURSION

```bash

    sort the left half of the array (assuming n >1 )
    sort the right half of the array (assuming n > 1)
    Marge the two halves together

```

- Worst Case - Upper Bound

We have to split up n elements and then recombine them, effectively doubling the sorted subarrays as we build them up.
(Combining sroted 1-element arrays into 2-element arrays, combining sorted 2-element arrays into 4-element arrays)

We have n-elements and we may have to combine log n times (dividing by 2, by 2, by 2 etc til 1)

O(n log n)
(faster than ^2)

- Best Case - Lower Bound

The array is already perfectly sorted. But we still have to split and recombine it back together with this algorithm.

Omega(n log n)

--

Faster at the expense of more memory as we have to create new ghost arrays to handle all the swapping.
Once you understand recursion properly it helps sort an array that much faster
