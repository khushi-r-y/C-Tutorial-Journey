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
