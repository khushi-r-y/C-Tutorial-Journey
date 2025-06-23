#include <stdio.h>

int main()  
{  
    char ch, con;  
    printf("Enter lowercase alphabet = \n");  
    ch = getchar();  
    con = ch - 32;  
    printf("%c -> %c", ch, con);  
}
