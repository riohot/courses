# Command line arguments

To collect command-line arguments

int main(int argc, string argv[])
{

}

These two special arguments enable you to know what data the user provided at the command line and how much data they provided,

- Argument COUNT - argc
  -- (can be named anything)
  -- data-type variable

```bash
    e.g

    $ ./filename 1000 300
    // argc = 3 - argument count 3
```

- Argument VECTOR - agrv

🧵 Everything in argv is a STRING (even numbers)

-- The first argument is argv0
-- The last argument is argv(argc-1)

Convert strings to numbers (in manual/walkthrough)

Q: What happens when you overstep the bounds of the array
A: probably going to suffer a segmentation fault.
