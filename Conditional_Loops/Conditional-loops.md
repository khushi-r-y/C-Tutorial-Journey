- #CONDITIONAL STATEMENT

- → Decision making statements

- if (simple if) → One way statement

- if ... else → Two way statement

- nested if ... else -> Multi-way statment

- if ... else if ... → Multi-way statement

- switch


- #Simple if

- Syntax:

  if (condition)  
  {  
      set of statements  
  }


---
```c
int main()  
{  
    int x, y, z;  
    scanf("%d %d", &x, &y);  
    
    if (x != y)  
    {  
        z = x + y;  
        printf("Sum = %d", z);  
    }  
    
    printf("End of program");  
}
```
-WAP to read 2 integers and find largest using simple if.

```c
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 integers:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("A is largest = %d", a);
    }
    if (b > a)
    {
        printf("B is largest = %d", b);
    }
}
```

- WAP to read a character check given character is upper case or lower case

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case");
    }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
}
```

- Write AP to read a integer check given integer is positive, negative, or zero.

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number = \n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive number");
    }
    if (x < 0)
    {
        printf("Negative number");
    }
    if (x == 0)
    {
        printf("Zero");
    }
}
```

- WAP to read three integers and find the largest

```c
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter 3 integers = \n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("x is largest");
    }
    if (y > x && y > z)
    {
        printf("y is largest");
    }
    if (z > x && z > y)
    {
        printf("z is largest");
    }
    return 0;
}
```

- WAP to read 2 integers and find largest using simple if.

```c
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 integers:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("A is largest = %d", a);
    }
    if (b > a)
    {
        printf("B is largest = %d", b);
    }
}
```

- WAP to read a character check given character is upper case or lower case

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case");
    }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
}
```

- Write AP to read a integer check given integer is positive, negative, or zero.

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number = \n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive number");
    }
    if (x < 0)
    {
        printf("Negative number");
    }
    if (x == 0)
    {
        printf("Zero");
    }
}
```

- WAP to read three integers and find the largest

```c
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter 3 integers = \n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("x is largest");
    }
    if (y > x && y > z)
    {
        printf("y is largest");
    }
    if (z > x && z > y)
    {
        printf("z is largest");
    }
    return 0;
}
```

- WAP to read an integer & check given integer is even or odd.

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Even number");
    }
    if (x % 2 == 1)
    {
        printf("Odd number");
    }
    return 0;
}
```

- if-else syntax:
```c
     if (condition)
     {
        set of statement;
     }
     else
     {
        set of statement;
     }
```

- WAP to read 2 integers find largest.

```c
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 integers:");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("x is largest");
    }
    else
    {
        printf("y is largest");
    }
    return 0;
}
```

- WAP to read a character check given character is alphabet or not

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }
    return 0;
}
```

- WAP to read alphabet & convert upper case to LC & LC to UC.

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Alphabet character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else
    {
        ch = ch - 32;
    }
    printf("%c", ch);
    return 0;
}
```

- WAP read age and check given age is eligible to vote or not.

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter your age = ");
    scanf("%d", &x);
    if (x >= 18)
    {
        printf("You can Vote");
    }
    else
    {
        printf("You can't Vote");
    }
    return 0;
}
```

- WAP to read Year & check given year is leap year or not.

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter Year: ");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}
```

- WAP to read 4 integer nos p, q, r, s. if p+q and r+s are the same and if sum of p & q > sum of p & s, s>q and display correct values otherwise display wrong values.

```c
#include <stdio.h>

int main()
{
    int p, q, r, s;
    printf("Enter 4 integers = ");
    scanf("%d %d %d %d", &p, &q, &r, &s);
    if((p + q == 0 && r + s > 0 && s > q && (r + s) > (p + q)))
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }
    return 0;
}
```

- WAPR 3 digits number and find sum of digits.

```c
#include <stdio.h>

int main()
{
    int N, sum;
    printf("Enter 3 Digits no. = ");
    scanf("%d", &N);
    if(N < 100 || N > 999)
    {
        printf("Enter 3 digits number");
    }
    else
    {
        sum = N % 100 % 10;
        sum = sum + N / 10 % 10;
        sum = sum + N / 1 % 10;
        printf("Sum of Digits = %d", sum);
    }
    return 0;
}
```
