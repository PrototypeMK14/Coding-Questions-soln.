#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d is neither prime nor composite.", n);
    }

    else
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 1)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }
    return 0;
}