#include <stdio.h>

int main()
{
    int a = 3;
    int b = 2;

    // casting
    double points = (double)a / (double)b;
    print("%f \n", points);

    double pi = 3.1415;
    int piConverted = (int)pi;

    printf("%f %d \n", pi, piConverted);
}