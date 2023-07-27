#Section - Algorithms

- How should we compare Algorithms

  - Look at running time? comparing upper bounds

- What are structs

Quite similar to objects
Objects can have methods and functions tied to them. Structs cant

```bash
    typedef struct
    {
        string name;
        int votes;
    }
    candidate;
```

Adding information

```bash
    candidate president;
    president.name = "John Fortnite Kennedy";
    president.votes = 300;
```

When creating an array. To print(or access) a particular sub-element we can use

```bash
    structName[i].category;
```

- RECURSION

Approach to problem solving

- There are some algorithms that use recursion

// So you always need base cases to stop the call stack from running infinitely

~ Draw things out and see if theres recurring equations
i.e if a problem is created by series of smaller idential problems
