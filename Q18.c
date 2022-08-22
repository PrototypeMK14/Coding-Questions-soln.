#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n) {
    int fact = 1;
    for(int i=1 ;i<=n;i++) {
        fact*=i;
    }
    return fact;
}

// Taylor's Series of sin(x);

int main() {

    // float sum=0,i=0;
    // int a;
    // printf("Enter the point : ");
    // scanf("%d",&a);
    // printf("Taylor's series of sin(x) is : ");
    // while(1>0) {
    //     if(i==0) {
    //         sum=sin(a)/fact(i);
    //     }
    //     printf("%d + ",sum);
    //     if(i==4) {
    //         break;
    //     }
    //     i++;

    // }

    //int f=derive(x*x,1);

    return 0;
}