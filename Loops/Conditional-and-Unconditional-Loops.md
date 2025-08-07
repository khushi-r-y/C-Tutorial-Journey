*LOOPS*

---

Iterative statement

Conditional statement

Backward branching statement



---

- Types of Loops

Conditional          
   Loops                 
  while                   
  do...while  
  for

Un-Conditional  Loops
goto
---

- Syntax of goto

label:
    set of statements;
    goto label;


---

- Example Program Using goto to Display "Hello World" Repeatedly

Display:
    printf("Hello World\n");
    goto Display;


---

- Output

Hello World  
Hello World  
Hello World  
Hello World  
Hello World  
...

(This will repeat infinitely)


---

- Un-conditional loop goto

```c
int main()
{
   int i;
   i=1;
   Displaynatural:
      printf("%d\n",i);
      i++;
   if(i<=5)
   {
      goto Displaynatural;
   }
   return 0;
}
```

- Conditional loop
- while

- WAPTD 1 to 5 natural numbers in reverse order
```c
#include<stdio.h>
int main()
{
   int i;
   i=5;
   while(i>=1)
   {
      printf("%d\n",i);
      i--;
   }
   return 0;
}
```
- WAPTD first 10 even numbers
```
#include<stdio.h>
int main()
{
   int i=1;
   while(i<=20)
   {
      if(i%2==0)
      {
         printf("%d\n",i);
      }
      i++;
   }
   return 0;
}
```
