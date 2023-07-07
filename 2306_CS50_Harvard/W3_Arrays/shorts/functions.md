#functions

Sometimes called methods, procedures or subroutines...

Q: What is a function?
A: A black box with a set of >0 inouts and 1 output

```bash
    add(a, b , c)
    {
        // code too add
    }

    mult(a, b)
    {
        // code to multiply
    }
```

Q: Why is it a black box?
A: Often we dont actually know whats going on inside the box (And we dont need to know)

_Organisation_

- Functions help break up a comliocated problem into more managable subparts

_Simplification_

- Smaller components tend to be easier to design implement and debug

_Re-use_

- Funcs can be re-used as you only need to write them once but can use as often as you need

--

- Function declaration

```bash
    return-type name(type argument list);
```

1. declare the function
2. in C they go to the top of the code
3. To IMPLEMENT the function means to actually design/make the function

In function declarations the names arent terribly important but often it helps to name them appropriately

In C, below is a function _definition_ - defining the function

```bash
    float var(float a, float b) {
        sum = a * b
        return sum;

        or

        return x * y;
        }
```

Return = passing back the product of the function that we can use in the rest of the code

--

valid_triable

- 3 real numbers (3 sides of triangle)
- output t or f (bool)
- the sum of the len of any two sides of the triangle must be > len of 3rd side
