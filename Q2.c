#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    printf("Your choices are [+,-,/,x]\n");
    float a, b;
    printf("Enter the operation : \n");
    scanf("%f%c%f", &a, &choice, &b);
    switch (choice)
    {
    case '+':
        printf("=%.2f", a + b);
        break;

    case '-':
        printf("=%.2f", a - b);
        break;

    case 'x':
        printf("=%.2f", a * b);
        break;

    case '/':
        if (b != 0)
        {
            printf("=%.2f", a / b);
        }

        else
        {
            printf("=%.2f", b / a);
        }
        break;

    default:
        printf("Invalid Choice!!");
        break;
    }
    return 0;
}