# Conditionals

Allows your programs to make decisions and take different forks in the road depending on the values of variables or user input.

## if

```bash
    if (bool) // true
{
    // do code
}
```

## if else

- if bool is true first code runs otherwise else runs...

```bash
    if (bool) // true
    {
        // code
    }
    else
    {
        // code
    }
```

## if else if else chain

```bash
    if (bool)
    {
        // code
    }
    if else
    {
        // code
    }
```

In some cases it is possible to create a chain of non-mutually exclusive branches.
Else will only bind to the nearest if

```bash
    if (bool1)
    {
        // code
    }
    if  (bool2)
    {
        // code
    }
    else  (bool3)
    {
        // code
    }
```

## SWITCH

- Specify Distinct cases instead of relying on booleans
- Here if a user gives 1 then do case 1 > break. etc etec

```bash
    int x = GetInt();
    switch(x)
    {
        case 1;
            printf("One!\n");
            break;
        case 2;
            printf("Two!\n");
            break;
        case 3;
            printf("Three!\n");
            break
        default:
            printf("Sorry!\n");
    }
```

## TERNARY OPERATOR (?:)

given example of if else

```bash
    int x = getInt()
    if (expr) // true
    {
        x = 5;
    }
    else
    {
        x = 6;
    }
```

can be written as

```bash
    int x = (expr) ? 5 : 6
    // 5 = true, 6 = false
```
