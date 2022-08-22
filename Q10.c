#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,count=0,a;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter the element to be searched : ");
    scanf("%d",&target);
    for(int i=0;i<n;i++) {
        if (arr[i]==target) {
            count++;
            a=i;
            break;
        }
    }

    if(count==1) 
        printf("Element found at index %d is = %d",a,target);

    else 
        printf("Element not found!!");
    return 0;
}