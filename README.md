# -C-Stack-Implementation-Using-Array

## Overview

This repository contains a Stack Data Structure implementation in C using arrays. The project demonstrates stack operations such as Push, Pop, Peek, and Traverse using menu-driven programming.

A stack follows the **LIFO (Last In First Out)** principle where the last inserted element is removed first.

This project is useful for:

- Beginners learning Data Structures
- College laboratory exercises
- Interview preparation
- Understanding stack operations
- Logic-building practice
- Embedded C fundamentals

---

## Features

### 1. Push Operation

Adds a new element to the top of the stack.

If stack reaches maximum capacity:

```text
Stack Overflow
```

#### Example

```text
Enter element: 10

10 pushed
```

---

### 2. Pop Operation

Removes the top element from the stack.

If stack is empty:

```text
Stack Underflow
```

#### Example

```text
Popped item: 50
```

---

### 3. Peek Operation

Displays the current top element without removing it.

#### Example

```text
Top Element: 30
```

If stack is empty:

```text
Stack Empty
```

---

### 4. Traverse Operation

Displays all elements from top to bottom.

#### Example

```text
Stack Elements:

50
40
30
20
10
```

---

### 5. Exit Program

Terminates the application.

#### Example

```text
Program Exited
```

---

## Concepts Used

- Stack Data Structure
- Arrays
- Functions
- Function Declaration
- Menu Driven Programming
- LIFO Principle
- Conditional Statements
- Loops
- Global Variables
- Modular Programming

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-stack-array/
│
├── stack_array.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc stack_array.c -o stack
```

Run:

```bash
./stack
```

Windows:

```bash
stack.exe
```

---

## Sample Menu

```text
1.PUSH
2.POP
3.PEEK
4.TRAVERSE
5.EXIT

Enter choice:
```

---

## Algorithm

### PUSH

1. Check if stack is full
2. Increment top
3. Insert element

### POP

1. Check if stack is empty
2. Return top element
3. Decrement top

### PEEK

1. Check stack empty
2. Display top value

### TRAVERSE

1. Print elements from top to bottom

---

## Learning Outcomes

After completing this project, you will understand:

- Stack implementation using arrays
- LIFO working principle
- Push and Pop operations
- Overflow and Underflow conditions
- Menu-driven application development
- Function modularization

---

## Future Improvements

Possible future additions:

- Dynamic Stack using Linked List
- Stack using Dynamic Memory Allocation
- Expression Evaluation
- Infix to Postfix Conversion
- Undo/Redo System
- Browser History Simulation
- Multiple Stack Implementation

---

## Author

**Harsha G**

Learning:

- Data Structures
- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
