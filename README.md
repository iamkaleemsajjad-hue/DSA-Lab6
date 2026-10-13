# DSA Lab 06 - Stacks and Queues

**Name:** Muhammad Kaleem Sajjad  
**Reg No:** 544147  
**Section:** BSCS-15E  
**Course:** Data Structures and Algorithms  
**Date:** 13th October 2026  

---

## Overview

This lab covers the implementation of **Stacks** (LIFO) and basic **Queues** (FIFO) in C++ without using any built-in STL containers. All tasks use plain arrays or linked lists with functions only (no classes).

---

## Files

| File | Task | Description |
|------|------|-------------|
| Q1.cpp | Task 1 | Stack using an array |
| Q2.cpp | Task 2 | Stack using a linked list |
| Q3.cpp | Task 3 | Word reversal using a stack |
| Q4.cpp | Task 4 | Queue insertion (enqueue + display) |
| Q5.cpp | Task 5 | Queue removal (dequeue + peek) |
| Q6.cpp | Task 6 | Customer service queue (menu-driven) |

---

## Task Descriptions

### Task 1 – Array Stack
Implements push, pop, peek, and display using `int items[5]` and `top = -1`. Tests overflow and underflow conditions.

### Task 2 – Linked List Stack
Uses a `Node` struct with `int data` and `Node* next`. Insert and remove only at the head. Frees all nodes before exit.

### Task 3 – Word Reversal
Reads a word, pushes each character onto a char array stack, then pops them to print in reverse. Example: `DATA` → `ATAD`.

### Task 4 – Queue Insertion
Implements a linear array queue with `enqueue()` and `display()`. Uses `front` and `rear` indices starting at -1. Tests full queue condition.

### Task 5 – Queue Removal
Extends Task 4 with `dequeue()` and `peekFront()`. Resets both indices to -1 when the last item is removed. Verifies queue works after reset.

### Task 6 – Customer Service Queue
Menu-driven app using the linear queue. Assigns token numbers to customers. Options: Add, Serve, View next, Display, Exit. Handles all boundary conditions.

> **Note:** This uses a linear queue. Once `rear` reaches index 4, insertion is blocked until the queue is fully emptied and resets. Circular queue is not required for this lab.

---

## How to Compile and Run

```bash
g++ Q1.cpp -o Q1 && ./Q1
g++ Q2.cpp -o Q2 && ./Q2
g++ Q3.cpp -o Q3 && ./Q3
g++ Q4.cpp -o Q4 && ./Q4
g++ Q5.cpp -o Q5 && ./Q5
g++ Q6.cpp -o Q6 && ./Q6
```

Each file compiles and runs independently. Requires C++11 or later.
