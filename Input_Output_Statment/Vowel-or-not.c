#include <stdio.h>

int main()  
{  
    char ch;  
    printf("Enter alphabet = \n");  
    ch = getchar();  
    
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? printf("Vowel character"):printf("Not a vowel character");  
}
