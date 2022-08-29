#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Given polynomial is of format P(x) = AnXn+An-1*Xn-1+An-2*Xn-2+.....+A0X0\n");
    float num, x, sum = 0, n;
    int i;
    printf("Enter the degree of polynomial : ");
    scanf("%f", &n);
    printf("Enter the value of x : ");
    scanf("%f", &x);
    for (i = n; i >= 0; i--)
    {
        printf("Enter the co-effieceint of x%d : ", i);
        scanf("%f", &num);
        sum += num * pow(x, i);
    }

    printf("The value of polynomail P(%.2f) is = %.2f", x, sum);
    return 0;
}