#include <stdio.h>
#include <stdlib.h>

int sum(int *ptr, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}

int mean(int *ptr, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    return (sum / N);
}

int sd(int *ptr, int N)
{
    int sum = 0, mean;
    for (int i = 0; i < N; i++)
    {
        sum += *(ptr + i);
    }

    mean = sum / N;
    sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += (*(ptr + i) - (mean));
    }

    return (sum/N);
}

int main()
{
    int N;
    printf("Enter the no. of real nos. you want :");
    scanf("%d", &N);
    int array[N];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int *ptr = array;

    printf("Sum of the array elements is = %d\n", sum(ptr, N));
    printf("Mean of the array is = %d\n", mean(ptr, N));
    printf("Std. deviation of the array is = %d\n", sd(ptr, N));
    return 0;
}