#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the sorted array :- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target, count = 0, a;
    printf("Enter the element to be searched : ");
    scanf("%d", &target);
    if (target > arr[(n - 1) / 2])
    {
        for (int i = (n / 2); i < n; i++)
        {
            if (arr[i] == target)
            {
                count++;
                a = i;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i <= ((n - 1) / 2); i++)
        {
            if (arr[i] == target)
            {
                count++;
                a = i;
                break;
            }
        }
    }
    if (count == 1)
        printf("Element found at index %d is = %d", a, target);
    else
        printf("Element not found!!");
    return 0;
}