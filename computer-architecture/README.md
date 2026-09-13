# Computer Architecture

## Book: Computer Systems: A Programmer's Perspective (CSAPP)

### Chapter 2 -- Representing and Manipulating Information

Exercises covering data representation at the bit level: hexadecimal
notation, byte ordering, integer encoding (unsigned and two's complement),
and integer arithmetic.

| File | Topic |
| ---- | ----- |
| `csapp/csapp_2_1.c` | Binary-to-hexadecimal conversion (stub) |
| `csapp/csapp_2_1_1.c` | `show_bytes` -- inspecting byte representations of int, float, and pointer values (p. 45); `fun1`/`fun2` shift-and-cast experiments |
| `csapp/csapp_2_10.c` | In-place swap using XOR |
| `csapp/csapp_2_2_8.c` | Unsigned `sum_elements` -- demonstrates the unsigned-length bug |
| `csapp/csapp_pp_2_11.c` | Practice Problem 2.11 -- `reverse_array` with in-place XOR swap |
| `csapp/csapp_pp_2_12.c` | Practice Problem 2.12 -- bit-level masking with `&`, `^`, `\|` |
| `csapp/csapp_pp_2_27.c` | Practice Problem 2.27 -- `uadd_ok`, detecting unsigned addition overflow |
| `csapp/csapp_pp_2_30.c` | Practice Problem 2.30 -- `tadd_ok`, detecting signed addition overflow |

### Chapter 3 -- Machine-Level Representation of Programs

| File | Topic |
| ---- | ----- |
| `csapp/csapp_3_2_2.c` | `multstore` -- no `main`; exists to study compiler-generated assembly (`make asm SRC=computer-architecture/csapp/csapp_3_2_2.c`) |

------------------------------------------------
[<- Table of Contents](../README.md)
