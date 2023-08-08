# Hexadecimal

_Decimal_
Most Western countries use the decimal system, aka base-10 to represent numeric data

```bash
    0 1 2 4 5 6 7 8 9
```

_Binary_
Computers use base-2 aka binary system

```bash
    0 1
```

_Hex_

Those 0 & 1s in large chains are difficult to read. Thus HEX

```bash
    0 1 2 3 4 5 6 7 8 9 a b c d e f
```

A more human way to express binary

- a group of four binary digits (Bits) is able to have 16 combinations, and each of those combinations maps to a single hex digit
- 4 bits is a 0.5 byte - 8 bits = 1 byte, 1 b

```bash

        8,4,2,1

Decimal | Binary | Hex
//--------------------
    0  |  0000  |  0x0
    1  |  0001  |  0x1
    9  |  1001  |  0x9
    15 |  1111  |  0xF

```

Hex numbering

```bash

    // powers of 16
    16^2 |16^1| 16^0
  ...256 | 16 | 1
  0x 3   |  9 | 7
     A   |  D | C

```

To convert. Group BITS into groups of 4 and then do it..

Way to understand memory addresses and other ways of using data in C.
