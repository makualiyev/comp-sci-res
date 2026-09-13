# Study Progress

Progress tracker for the [Teach Yourself Computer Science](https://teachyourselfcs.com/) curriculum.

**Legend:** `[x]` done | `[-]` in progress | `[ ]` not started

---

## 1. Programming

Book: *Structure and Interpretation of Computer Programs*
Videos: Brian Harvey's Berkeley CS 61A

- [ ] SICP

Supplementary:

- [-] Beej's Guide to C Programming
  - [x] Ch 19 -- The C Preprocessor (stringification, token pasting)
- [ ] Advanced Programming in the Unix Environment (APUE)

## 2. Computer Architecture

Book: *Computer Systems: A Programmer's Perspective* (CSAPP)
Videos: Berkeley CS 61C

- [-] Ch 2 -- Representing and Manipulating Information
  - [x] 2.1 Information storage, byte ordering, `show_bytes`
  - [x] 2.1 Hexadecimal conversion
  - [x] 2.1 In-place XOR swap
  - [x] 2.1 Bit-level masking (PP 2.12)
  - [x] 2.2 Unsigned length bug (`sum_elements`)
  - [x] 2.2 Array reversal with XOR swap (PP 2.11)
  - [x] 2.3 Unsigned addition overflow detection (PP 2.27)
  - [x] 2.3 Signed addition overflow detection (PP 2.30)
  - [ ] 2.4 Floating point
- [-] Ch 3 -- Machine-Level Representation of Programs
  - [x] 3.2 `multstore` -- studying compiler output
  - [ ] 3.3 Data formats
  - [ ] 3.4 Accessing information
  - [ ] 3.5 Arithmetic and logical operations
  - [ ] 3.6 Control
  - [ ] 3.7 Procedures
  - [ ] 3.8 Array allocation and access
  - [ ] 3.9 Heterogeneous data structures
- [ ] Ch 4 -- Processor Architecture
- [ ] Ch 5 -- Optimizing Program Performance
- [ ] Ch 6 -- The Memory Hierarchy

## 3. Algorithms and Data Structures

Book: *The Algorithm Design Manual*
Videos: Steven Skiena's lectures

Tracked separately: [dsa-concepts-problems](https://github.com/makualiyev/dsa-concepts-problems)

## 4. Math for Computer Science

Book: *Mathematics for Computer Science*
Videos: Tom Leighton's MIT 6.042J

- [ ] Proofs
- [ ] Structures (graphs, sets, number theory)
- [ ] Counting
- [ ] Probability

## 5. Operating Systems

Book: *Operating Systems: Three Easy Pieces* (OSTEP)
Videos: Berkeley CS 162

- [-] Part I -- Virtualization
  - [-] Ch 5 -- Process API
    - [x] `fork()` basics
    - [x] `fork()` + `wait()`
    - [ ] `exec()` variants
    - [ ] Homework exercises (simulation + coding)
  - [ ] Ch 6 -- Mechanism: Limited Direct Execution
  - [ ] Ch 7-11 -- CPU Scheduling
  - [ ] Ch 13-24 -- Memory (address spaces, paging, swapping)
- [ ] Part II -- Concurrency
- [ ] Part III -- Persistence

## 6. Computer Networking

Book: *Computer Networking: A Top-Down Approach*
Videos: Stanford CS 144

- [-] TCP/IP Sockets in C (Donahoo) -- supplementary
  - [x] TCP echo client (IPv4, `socket`/`connect`/`send`/`recv`)
  - [ ] TCP echo server
  - [ ] UDP client/server
- [ ] Beej's Guide to Network Programming

## 7. Databases

Book: *Readings in Database Systems*
Videos: Joe Hellerstein's Berkeley CS 186

- [ ] Relational model
- [ ] SQL
- [ ] Storage and indexing
- [ ] Query processing
- [ ] Transactions and concurrency control

## 8. Languages and Compilers

Book: *Crafting Interpreters*
Videos: Alex Aiken's course on edX

- [ ] Scanning and parsing
- [ ] Representing code (AST)
- [ ] Evaluating expressions
- [ ] Statements and state
- [ ] Control flow
- [ ] Functions and closures
- [ ] Classes and inheritance
- [ ] Bytecode VM

## 9. Distributed Systems

Book: *Designing Data-Intensive Applications* (Martin Kleppmann)
Videos: MIT 6.824

- [ ] Foundations of data systems
- [ ] Distributed data (replication, partitioning)
- [ ] Derived data (batch/stream processing)

---

*Last updated: 2026-09-13*
