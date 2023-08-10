# Call Stacks

When you call a function, the system sets aside space in memory for that function to do its needed work

- We call such chunks of memory STACK FRAMES or FUNCTION FRAMES

More than one functions stack frame may exist in memory at a given time
e.g If main() → calls move() → calls direction(), all three functions have open frames

- but in general only 1 fn is running at a given time

```bash
    // stack

    direction()
    move()
    main()

```

- a new fn is pushed to the top of the stack
- when a fn finishes its work, it is popped off of the stack and the frame immediately below becomes the new active fn at the top
- This fn picks up immediately where it left off.
