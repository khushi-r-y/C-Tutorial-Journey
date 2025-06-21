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

### ASCII Values

- ASCII (American Standard Code for Information Interchange) represents characters as numerical codes.
- Each character is assigned a unique integer value.
- Common ASCII values:
  - 'A' = 65
  - 'Z' = 90
  - 'a' = 97
  - 'z' = 122
  - '0' = 48
  - '9' = 57
  - Space = 32
  - Enter (newline) = 10

---

### Operators in C

#### 1. Arithmetic Operators
- + Addition  
- - Subtraction  
- * Multiplication  
- / Division  
- % Modulus (remainder)

#### 2. Relational Operators
- == Equal to  
- != Not equal to  
- < Less than  
- > Greater than  
- <= Less than or equal to  
- >= Greater than or equal to

#### 3. Logical Operators
- && Logical AND  
- || Logical OR  
- ! Logical NOT

#### 4. Assignment Operators
- = Assign  
- +=, -=, *=, /=, %= Compound assignment

#### 5. Increment/Decrement Operators
- ++ Increment  
- -- Decrement

#### 6. Bitwise Operators
- & Bitwise AND  
- | Bitwise OR  
- ^ Bitwise XOR  
- ~ Bitwise NOT  
- << Left shift  
- >> Right shift

#### 7. Conditional (Ternary) Operator
- condition ? expression1 : expression2;

#### 8. Special Operators
- sizeof Returns size of a data type or variable  
- & Returns the address of a variable  
- * Pointer to a variable
