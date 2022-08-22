#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the sorted array :- ");
    scanf("%d", &n);
    int array[n];
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int k = 0;
    int i = 0;
    for (int l = 0; l < 50; l++)
    {
        if (i == n)
        {
            i = 0;
        }

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (array[i] < array[j])
            {
                count += 1;
            }
        }
        if (count == (n - 1) - k)
        {
            arr[k] = array[i];
            k++;
        }
        i++;
    }

    printf("Sorted Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int target, count = 0, a;
    printf("\nEnter the element to be searched : ");
    scanf("%d", &target);

    if (target > arr[n / 2])
    {
        for (int i = (n / 2); i <= n; i++)
        {
            if (arr[i] == target)
            {
                count++;
                a = i;
                break;
            }
        }

        printf("Element found at index %d is = %d\n", a, target);
    }

    else
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (arr[i] == target)
            {
                count++;
                a = i;
                break;
            }
        }

        printf("Element found at index %d is = %d", a, target);
    }
    return 0;
}