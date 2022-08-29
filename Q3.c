#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter the coeffients of a,b and c respectively : ");
    scanf("%f%f%f", &a, &b, &c);
    d = ((b * b) - (4 * a * c));
    if (d < 0)
    {
        r1 = (sqrt(-d)) / (2 * a);
        printf("Roots of quad. equation are complex i.e r1 = %.2f+%.2fi\n", -b / 2 * a, r1);
        printf("Roots of quad. equation are complex i.e r2 = %.2f-%.2fi\n", -b / 2 * a, r1);
    } else if (d > 0)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("Roots of quad. equation are real i.e = %.2f and %.2f", r1, r2);
    }
    else
    {
        r1 = -b / (2 * a);
        printf("Roots of quad. equation are equal i.e = %.2f and %.2f", r1, r1);
    }
    return 0;
}