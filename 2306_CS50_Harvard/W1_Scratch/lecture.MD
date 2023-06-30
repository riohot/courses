# Scratch

Week 1 - Introduction to Computer Science

⏰ and 🏃‍♂️ Time and practice

---

- First sciences built by humans themselvers ergo if another human built and designed this surely
  anyone can also figure it out.
- Computer Science is really the study of Information (Not only programming)

- Problem solving

input → [] ← output

- How do we solve these
- How do we code up answer

---

_Representation_

Computers use Binary

- Bi-nary D-igit - BIT
- 0 or 1
- 8 bits in 1 byte
  - 16 bits in 2 bytes etc etc

Humans use Decimal system

- Base 10

How do computers use Binary?

- 💡 similar to a lightbulb (ON/OFF)
  - 0 = OFF
  - 1 = ON

Inside a computer are Millions of tiny switches called transistors which can be switched
on or off - so Electricity is there (OR NOT) e.g

To represent more than 1 we use more bulbs

- 💡💡💡💡
  Binary
- 8,4,2,1
- 2³,2²,2¹,2⁰

e.g

- 4,2,1
- 1,0,1

= 5

Decimal

- 1000,100,10,1
- 10³, 10², 10¹, 10⁰

- The base of each position represents a different base number

Computer typically represents '0' with 8 bytes

- 8bit maximum is 256
  128,.......1 [ all added together]
  0,0,0,0,0,0,0,0

- Letters

Letters and punc. also are represented by letters - this is called ASCI
A = 65
Numbers are represented by other numbers
ASCII is (1byte)8bit so can only represent 256 characters
Nowadays our phones have more memory can so we can add more bits

- Emojis

Emojis, foreign letters are represented by UNICODE

- 32bit maximum is in the billions
  - Think if 8 0's (see above) represent hundreds.. 4 more is already a million .. now add 18 more 0's thats 4 billion

Emoji Skin colour problem

- Q. How to assign multiple colours without wasting memory on a completely separate emoji
- A. We send the outline of the emoji #code followed by a #code that represents the colou
- This means double the amount instead of magnatude the amount
- Reusing patterns is another way to save space

---

- Images and colour

🎨 - Every dot on screen, phone etc there is a # represented by some combo of RGB
Each dot is 3 bytes (how much RGB for each) aka 24 bits (8 x 3)

Think of video as a series of changing pixels over time

🎶 Musical representation

- Given the ASCII example now 8-bit music makes perfect sense since there is only so many slots (8 binary digits / 256) for a range of musical notes. When you increase the bits then you have more slots
  here you can assign not only different sounds but also weights of sound etc etc etc

---

_Algorithm_

input → [algo.] ← output

- Abstraction - simplification of something so that you focus on High-level not low-level
  - e.g Most of us dont care how the engine of a car or train works.
- Algorithm aka step by step instructions of how to solve a problem

Typical example - Searching a phonebook

- Searching page by page would be inneficient
- Searching 2page by 2page would be better but you might skip??
- We know 1/2 the book is useless so get rid (Go to 1/2, Go to 1/2 (left - Right ))

time to solve?

- We need to think about what happens for every given additional/new piece of information
- In the first example. Adding a new page means having another whole action vs. in the last option
  it barely adds any time.
- Even if the phone book got twice as big it would only take 1 extra step, whereas the first problem is twice as long.

[image]

---

_Pseudocode_

Q. How do I solve the problem?
A. We use human code

We can translate the above to

```bash
    1. Pick up phone book
    2. Open to middle of the book
    3. Look at page
    4. If person is on page
        5.  Call person (aka end)
    6. Else If person is earlier in the book
        7. open to middle half
        8. loop to step 3
    9. Else if person is later in the book
        11. Open to middle of the right half  of book
        12. quit
```

WELL DEFINED BEHAVIOUR FOR ALL POSSIBILITIES

Functions = Verbs (doing words) = Pick, open, look, call, open, open, quit
Conditionals = Else, if = (a fork in the road)
Booleans (1 or 0)questions
Loop (go back to X)
Variable = Score

---

👾 Scratch

input → [algo.] ← output
argument → function <- side effect

- Functions - Some functions dont do anything magically on the screen BUT they RETURN you a RETURN value that you can do any thing with

Thoughts on code design. Repeating one self is bad practice.

Think of functions and coding in terms of puzzle pieces 🧩 that can do things

What if there isnt a puzzle piece you need. Well other people can and do do this. This is basically what functions are. This is great for efficiency

Functions let you implement algorightms but they are also themselves abstractions
(You dont have to care how it was built anymore)
we can pass arguments, loops etc into functions

- Scratch tips

-- Note: CHUNKING! Dont try and tackle any idea, program etc in one big chunk. Start small and grow
-- Computers are really fast and answer questions really fast so somtimes (Always think which actions can be saved in a box)
Infinite/forever loops are sometimes useful
-- Custom function blocks

🕹 Gaming

- Most games are just iterating through sprite images
- Setting x-y pixel location
- Setting movement of directions
- Randomness
- Mutliple events triggered by flag-click
