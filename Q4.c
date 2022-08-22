#include <stdio.h>
#include <stdlib.h>

int main() {
    int GCD,a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if(a<b) {
        for(int i=1;i<=a;i++) {
            if(a%i==0 && b%i==0) {
                c=i;
            }
        }
    }
    else {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
        }
    }
    GCD=c;
    printf("GCD of %d and %d is = %d\n",a,b,GCD);
    printf("LCM of %d and %d is = %d\n",a,b,(a*b)/GCD);
    
    return 0;
}