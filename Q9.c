#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,x,sum=0,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=n;i>=0;i--) {
        scanf("%d",&num);
        sum+=num*pow(x,i);
    }

    printf("The value of polynomail P(%d) is = %d",x,sum);
    return 0;
}