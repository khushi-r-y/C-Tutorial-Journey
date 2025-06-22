#include <stdio.h>

int main() 
{
    int P, T;
    float R, SI;

    P = 2;
    T = 10;
    R = 5;
    SI = (P * T * R) / 100.0;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
