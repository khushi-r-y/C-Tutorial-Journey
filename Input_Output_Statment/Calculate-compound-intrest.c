#include <stdio.h>
#include <math.h>

int main() 
{
    int p, t;
    float r, ci;

    printf("Find & compound Interest\n");
    printf("Enter value of Principal amount = ");
    scanf("%d", &p);
    printf("Enter value of rate of interest = ");
    scanf("%f", &r);
    printf("Enter value of time period = ");
    scanf("%d", &t);

    ci = p * pow((1 + r / 100), t);

    printf("compound Interest = %f\n", ci);

    return 0;
}
