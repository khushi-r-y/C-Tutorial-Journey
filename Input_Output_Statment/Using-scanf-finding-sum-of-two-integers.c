#include <stdio.h>

int main() 
{
    int x, y, sum;

    printf("Find sum of 2 integer :\n");
    printf("Enter first input = ");
    scanf("%d", &x);
    printf("Enter second input = ");
    scanf("%d", &y);

    sum = x + y;

    printf("sum of 2 integers = %d\n", sum);

    return 0;
}
