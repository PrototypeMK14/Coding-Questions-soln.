#include <stdio.h>
#include <stdlib.h>

// Logic 5 1 3 2 4 find the lowest send it to lowest index.

int main() {
    int n,count,t,k=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array elements : ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++) {
        count=0;
        for(int j=0;j<n;j++) {
            if(arr[i]<arr[j]) {
                count++;
            }
        }

        if (count == n - 1 - k)
        {
            t = arr[i];
            arr[i] = arr[k];
            arr[k] = t;
            k++;
            i = 0;
        }

        else if(k==n) {
            break;
        }
    }

    printf("Sorted Array :- ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}