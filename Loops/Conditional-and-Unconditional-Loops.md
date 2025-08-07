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
