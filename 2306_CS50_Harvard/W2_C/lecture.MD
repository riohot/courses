# C

- Computers generally don't care about the legibility of code but humans etc do
- Most programmers prefer CLI (Command line interface) vs GUI (Graphical user interface)
- think of code ; as literature .

- For C anytime you want to print something you need to import a library of functions
- Assuming these basic functions arent included in a mid/low level language like C
- Standard input/output

- https://manual.cs50.io/

🖼

- C is very literal you have to explicity define almost everything e.g floats, ints, str etc.. and
  tell it explicitly what you want.
- Compare C to Scratch. Think in terms of blocks (functions n)

⬇️ Mandatory in C

```bash
    #include <stdio.

    int main(void) [equivalent to press green flag]
```

Compile C (source code into machine code) program and run
In C you have to re-compile every time you edit code unlike python

```bash
    $ make <filename>
    $ ./<filename>
```

- Only when you create a variable do you need to explicitly state its type. Afterwards you dont
  have to state what it is

- C also uses CONST for immutable variables

- Variable placeholder = %s/n [plug in some value here]
- % = %%

- = is assignment not equals. Flow tends to go from left ← Right

- single characters = 'n' // single quote
- Strings = "sentence" // double quote

- = is assignment or 'get'
- == is soft equality
- || is or
- Increment +=1 (pr ++;)

---

_Primitive Data types_

- bool (boolean)
- char
- double
- float
- int
- long
- string
  ....

_Conditionals_

```bash
  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    printf("x is not less than y\n");
  }
  else
  {
     printf("x is equal to y!\n");
  }
```

- Interger overflow

- Computers of 32bits only count up to -2bn <> 2bn

_Type Casting_

You might have to convert certain types of data to another

- useful in the case of truncation where float(num/num) is giving 0.000

```bash
  float z = (float) x / (float) y;
  %.nf
```

// or use double z (helps with floating point imprecision)
