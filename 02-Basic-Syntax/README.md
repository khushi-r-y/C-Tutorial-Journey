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
```

### Identifiers
- **Identifiers** are names used to identify:
 - Variables
 - Functions
 - Structures

### Identifiers

- *Identifiers* are the names used to identify:
  - Variables
  - Functions
  - Arrays
  - Structures
  - Enums, etc.
- Rules for identifiers:
  - Must begin with a letter (A–Z, a–z) or underscore _
  - Can contain digits after the first character (A–Z, a–z, 0–9, _)
  - Case-sensitive (Total and total are different)
  - No spaces or special characters (except _)

---

### Data Types in C

C has several data types categorized into:

#### 1. *Primary Data Types*
- int – integer (e.g., 1, -5)
- float – single precision floating-point
- double – double precision floating-point
- char – single character (e.g., 'A')
- void – represents absence of type

#### 2. *Derived Data Types*
- Arrays
- Pointers
- Structures
- Unions

#### 3. *Enumeration (enum)*

---

### Integer, Float, Double, Char, Void

| Data Type | Size (in bytes) | Range / Description                  |
|-----------|------------------|--------------------------------------|
| int     | 2 or 4           | -32,768 to 32,767 / -2B to 2B approx |
| float   | 4                | 6 decimal places precision           |
| double  | 8                | 15 decimal places precision          |
| char    | 1                | Single character, ASCII-based        |
| void    | 0                | No value, used in functions with no return |

---

### Type Modifiers

Used to alter the meaning of base data types:

- short
- long
- signed
- unsigned

Example:
```c
unsigned int x = 100;
long double pi = 3.1415926535;
