# Chapter 2: Basic Syntax

## Basic Elements of C

### Keywords
- These are *pre-defined* words in C.
- Examples: if, else, for, while, break, continue, etc.
- Total: *32 keywords*

---

### Variables
- A variable is a *name* used to store a value.
- Declaration:

  int x;
  
-Assigning values:
 Examples,
 x=20;
 x=22;
 x=100;
-Stored in RAM.

### Initialization
- **Initialized variable** can be-
 -global
 -static
- **Uninitialized variable** are typically-
 -local

### Constants
- A **constant** is a **fixed** value.
*Defined using:
 - **Keyword**: `const`
 - **Preprocessor**: `#defined`
Example-
```c
const float pi = 3.142;   // uses 4 bytes
#define pi 3.142          // uses 0 bytes (preprocessor directive)

### Identifiers
- **Identifiers** are names used to identify:
 -Variables
 -Functions
 -Structures
