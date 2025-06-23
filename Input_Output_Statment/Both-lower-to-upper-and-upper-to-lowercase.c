#include <stdio.h>

int main()  
{  
    char ch, u, l;  
    printf("Enter an alphabet = \n");  
    ch = getchar();  
    u = ch + 32;  
    l = ch - 32;  
    
    (ch >= 65 && ch <= 90) ?printf("%c = %c", ch, l): printf("%c = %c", ch, u):  printf("Not an alphabet");  
}
