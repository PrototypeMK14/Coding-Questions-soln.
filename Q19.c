#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sum(float *ptr, int N)
{
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}

float mean(float *ptr, int N)
{
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    return (sum / N);
}

float sd(float *ptr, int N)
{
    float sum = 0, sd, mean;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    mean = sum / N;

    sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += pow((*(ptr + i) - mean), 2);
    }

    sd = sqrt(sum / N);

    return sd;
}

int main()
{
    int N;
    printf("Enter the no. of real nos. you want :");
    scanf("%d", &N);
    float array[N];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &array[i]);
    }

    float *ptr = array;

    printf("Sum of the array elements is = %.2f\n", sum(ptr, N));
    printf("Mean of the array is = %.2f\n", mean(ptr, N));
    printf("Std. deviation of the array is = %.3f\n", sd(ptr, N));

    return 0;
}