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

- #Nested if-else
```c
 Syntax: if (condition-1)
         {
             if (condition-2)
             {
                 set of statement-1; // cond-1 = True, cond-2 = True
             }
             else
             {
                 set of statement-2; // cond-1 = True, cond-2 = False
             }
         }
         else
         {
             if (condition-3)
             {
                 set of statements-3; // cond-1 = False, cond-3 = True
             }
             else
             {
                 set of statements-4; // cond-1 = False, cond-3 = False
             }
         }
```

- Example of nested if-else
```c
if (a > b)
{
    if (a > c)
    {
        printf("A is largest = %d", a);
    }
    else
    {
        printf("C is largest = %d", c);
    }
}
else
{
    if (b > c)
    {
        printf("B is largest = %d", b);
    }
    else
    {
        printf("C is largest = %d", c);
    }
}
```

- WAPFR 3 integers and find first largest and 2nd largest

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 integers = ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
    {
        printf("A is 1st largest");
        if (b > c)
        {
            printf("B is 2nd largest");
        }
        else
        {
            printf("C is 2nd largest");
        }
    }
    else
    {
        if (b > a && b > c)
        {
            printf("B is 1st largest");
            if (a > c)
            {
                printf("A is 2nd largest");
            }
            else
            {
                printf("C is 2nd largest");
            }
        }
        else
        {
            printf("C is 1st largest");
            if (a > b)
            {
                printf("A is 2nd largest");
            }
            else
            {
                printf("B is 2nd largest");
            }
        }
    }
    return 0;
}
```
 
## If-Else Statement Syntax


*if else if*
```c
*Syntax:* if (condition)
{
    set of statements -> cond 1 - True
}
else
{
    if (condition) -> cond 1 = F
                     cond 2 = T
    {
        set of statements -> cond 1 -> F,
                           cond 2 -> T
    }
}

*else*
{
    if (condition3)
    {
        set of statement: cond 1,2,3 = F
                         cond 4 = T
    }
    else
    {
        set of statment cond = 1,2,3,4 = F
    }
}
```
---

- Find Largest of 3 Numbers

- WAP to find largest of 3 nos using if-else

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 integers = \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("A is largest");
    }
    else
    {
        if (b > c)
        {
            printf("B is largest");
        }
        else
        {
            printf("C is largest");
        }
    }
    return 0;
}
```

---

- Check Positive, Negative, or Zero

- WAPTR an integer & check given integer is +ve or zero if using if else... if

```c
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a integer");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("x is positive");
    }
    else
    {
        if (x < 0)
        {
            printf("x is negative");
        }
        else
        {
            printf("x is zero");
        }
    }
    return 0;
}
```

---

- Day of Week Display

- WAPTR integer and display its corresponding day of a week

```
#include <stdio.h>

int main()
{
    int x;
    printf("Enter x value = ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Sun");
    }
    else
    {
        if (x == 2)
        {
            printf("Mon");
        }
        else
        {
            if (x == 3)
            {
                printf("Tue");
            }
            else
            {
                if (x == 4)
                {
                    printf("Wed");
                }
                else
                {
                    if (x == 5)
                    {
                        printf("Thu");
                    }
                    else
                    {
                        if(x==6)
                        {
                            printf("Fri);
                        }
                        else
                        {
                            if(x==7)
                            {
                                printf("Sat");
                            }
                            else
                            {
                                  printf("Invalid number");
                            }
                        }
                    }
              }
        }
     }
 }
 return 0;
 }
```

-Days of th week program

```c
int main()
{
    int x;
    printf("Enter x value: ");
    scanf("%d", &x);
    if(x == 1)
    {
        printf("Sun");
    }
    else if(x == 2)
    {
        printf("Mon");
    }
    else if(x == 3)
    {
        printf("Tue");
    }
    else if(x == 4)
    {
        printf("Wed");
    }
    else if(x == 5)
    {
        printf("Thu");
    }
    else if(x == 6)
    {
        printf("Fri");
    }
    else if(x == 7)
    {
        printf("Sat");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
```
- Check if number is even/odd and divisible by 4 or 3

```c
#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("The number is even\n");
        if(num % 4 == 0)
        {
            printf("Divisible by 4\n");
        }
        else
        {
            printf("Not Divisible by 4\n");
        }
    }
    else
    {
        printf("The number is odd\n");
        if(num % 3 == 0)
        {
            printf("Divisible by 3\n");
        }
        else
        {
            printf("Not divisible by 3\n");
        }
    }
    return 0;
}
```

- Check positive/negative even/odd and zero
```

#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num > 0)
    {
        if(num % 2 == 0)
        {
            printf("The number is Positive Even\n");
        }
        else
        {
            printf("The number is Positive odd\n");
        }
    }
    else if(num < 0)
    {
        if(num % 2 == 0)
        {
            printf("The Number is Negative Even\n");
        }
        else
        {
            printf("The Number is Negative Odd\n");
        }
    }
    else
    {
        printf("The number is zero\n");
    }
    return 0;
}
```
- Display month name based on number input
```c

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a integer: ");
    scanf("%d", &x);
    if(x == 1)
    {
        printf("Jan");
    }
    else if(x == 2)
    {
        printf("Feb");
    }
    else if(x == 3)
    {
        printf("Mar");
    }
    else if(x == 4)
    {
        printf("Apr");
    }
    else if(x == 5)
    {
        printf("May");
    }
    else if(x == 6)
    {
        printf("Jun");
    }
    else if(x == 7)
    {
        printf("July");
    }
    else if(x == 8)
    {
        printf("Agu");
    }
    else if(X == 9)
    {
        printf("Sept");
    }
    else if(x == 10)
    {
        printf("Oct");
    }
    else if(x == 11)
    {
        printf("Nov");
    }
    else if(x == 12)
    {
        printf("Dec");
    }
    else
    {
        printf("Invalid Number");
    }
    return 0;
}
```
