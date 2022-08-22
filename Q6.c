#include <stdio.h>
#include <stdlib.h>

int main() {
    int a=0,b=1,c,n;
    printf("Enter the term till you want Fibonacci series of : ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}