#include <stdio.h>
#include <math.h>
#define pi 3.142  // Defining a constant value for pi

float Area;  // Global variable

// Sub-function declaration
void Display() {
    printf("Area of circle = %.2f\n", Area);  // Printing the area
}

int main() {
    int radius;  // Local variable
    radius = 2;

    Area = pi * pow(radius, 2);  // Area = πr²

    Display();  // Calling the sub-function

    return 0;
}
