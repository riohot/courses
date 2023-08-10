# Defining Custom Data Types

TYPEDEF = provides a way to create a shorthand or rewritten name for data types

- First define a type in the normal way, then alias it to something else

```bash
    typdef <old name> < new name>

    typedef unsigned char byte;

    // cs50.h e.g.
    typedef char * string;

```

Combine with structures

```bash
    struct car
    {
        int year;
        char model[10];
        char plate[7];
        int odometer;
        double engine_size
    };

    // rename struct car to 'car_t'
    typedef struct char car_t


    OR

    typedef struct car
    {
        ...
    }
    car_t
```

Defining a variable might look like this

```bash
    ❌ struct car mycar;
    ✅ car_t mycar;

    ..

    mycar.year = 1990
```
