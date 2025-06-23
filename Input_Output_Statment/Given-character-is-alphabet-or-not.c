#include <stdio.h>

int main()  
{  
    char ch;  
    printf("Enter a character: \n");  
    ch = getchar();  
    
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))  
        printf("Alphabet character");  
    else  
        printf("Not an alphabet character");  
}
