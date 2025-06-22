#include <stdio.h>

int main() 
{
    int a, b, q;
    float c;

    a = 20;
    b = 100;
    q = a / b;
    c = (float)a / b;

    printf("Quotient = %f\n", c);

    return 0;
}
