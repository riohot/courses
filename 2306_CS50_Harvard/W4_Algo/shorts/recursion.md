# Recursion

🔑 Major key for clean, elegant code.
Solves problems in interesting ways, easy to visualise ways which are surprisingly short

Inception

DEFINITION: a recursive function is one that, as part of its execution, invokes itself

- Every recursive function has two cases that could apply, given any input
  -- the base case, which when triggered will terminate the recursive process
  -- the recursive case, which is where the recurison will actually occur

if we have single line returns in function (implicit) we dont have to use curly braces

---

In general, but NOT always, recursive functions replace loops in non-recursive functions.

--

The Collatz conjecture is applied to positive integers and speculate sthat is it always possible to get "back to 1"
if you follow these steps

- if n is 1, stop
- Otherwise, if n is even, repeat this process on n/2
- Otherwise, if n is odd, repreat this process on 3n + 1

- Write a recursive fn that calculates how many steps it takes to get to 1 if you start from n and recurse as indicated

```bash

int collatz(int n)
{
    // base case
    if (n == 1)
        return 0;
    // even numbers
    else if ((n % 2) == 0)
        return 1 + collatz(n / 2);
    // odd numbers
    else
        return 1 + collatz((3 * n) + 1);
}

```

return 1???
