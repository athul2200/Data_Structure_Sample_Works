# 📚 Data Structures & Algorithms in C

A collection of fundamental data structure and algorithm implementations written in **C**. These programs demonstrate core concepts such as stacks, queues, binary search trees, and expression evaluation — essential building blocks for computer science.

---

## 📂 Project Structure

```
C_Programs/
├── stack.c                 # Stack implementation with menu-driven operations
├── queue.c                 # Linear queue implementation
├── bst.c                   # Binary Search Tree with tree traversals
├── decimal_to_binary.c     # Decimal to binary conversion using a stack
├── infix_to_postfix.c      # Infix to postfix expression conversion
└── README.md
```

---

## 🧩 Programs

### 1. Stack — `stack.c`

An array-based stack implementation with a menu-driven interface.

**Operations supported:**
- **Push** — Insert an element onto the stack
- **Pop** — Remove and display the top element
- **Peek** — View the top element without removing it
- **Display** — Print all elements in the stack

**Key Details:**
- Maximum capacity: `100` elements
- Includes overflow and underflow checks

---

### 2. Queue — `queue.c`

A linear queue implementation using an array with front and rear pointers.

**Operations supported:**
- **Enqueue** — Insert an element at the rear
- **Dequeue** — Remove an element from the front
- **Display** — Print all elements in the queue

**Key Details:**
- Maximum capacity: `5` elements
- Handles underflow and overflow conditions

---

### 3. Binary Search Tree (BST) — `bst.c`

Constructs a binary search tree and performs all three depth-first traversals.

**Traversals demonstrated:**
- **Inorder** (Left → Root → Right) — produces sorted output
- **Preorder** (Root → Left → Right)
- **Postorder** (Left → Right → Root)

**Sample Tree:**
```
        50
       /  \
      30    70
     / \   / \
    20  40 60  80
```

---

### 4. Decimal to Binary Converter — `decimal_to_binary.c`

Converts a decimal number to its binary representation using a stack-based approach.

**How it works:**
1. Repeatedly divides the number by 2 and pushes the remainder onto a stack
2. Pops all elements to produce the binary digits in correct order

---

### 5. Infix to Postfix Converter — `infix_to_postfix.c`

Converts an infix mathematical expression to postfix (Reverse Polish Notation) using a stack.

**Supported operators:** `+`, `-`, `*`, `/`, `^`

**Operator Precedence:**
| Operator | Precedence |
|----------|------------|
| `+`, `-` | 1          |
| `*`, `/` | 2          |
| `^`      | 3          |

**Features:**
- Handles parenthesized sub-expressions
- Supports alphanumeric operands

---

## 🛠️ Getting Started

### Prerequisites

- A C compiler such as **GCC** (MinGW on Windows) or **Clang**

### Compile & Run

```bash
# Compile any program
gcc <filename>.c -o <output_name>

# Example — compile and run the stack program
gcc stack.c -o stack
./stack
```

> **Windows users:** Use `.\stack.exe` instead of `./stack` when running in PowerShell or Command Prompt.

---

## 💡 Concepts Covered

| Concept              | Program(s)                                  |
|----------------------|---------------------------------------------|
| Stack (Array-based)  | `stack.c`, `decimal_to_binary.c`, `infix_to_postfix.c` |
| Queue (Linear)       | `queue.c`                                   |
| Binary Search Tree   | `bst.c`                                     |
| Tree Traversals      | `bst.c`                                     |
| Expression Parsing   | `infix_to_postfix.c`                        |
| Number System Conv.  | `decimal_to_binary.c`                       |

---

## 🧰 Tech Stack

- **Language:** C (C99)
- **Compiler:** GCC / MinGW / Clang
- **Platform:** Cross-platform (Windows, Linux, macOS)

---

## 📄 License

This project is open-source and available for educational purposes.
