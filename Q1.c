#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,big;
    printf("Enter the three nos. consecutively : ");
    scanf("%d%d%d",&a,&b,&c);
    big = ((a>b)?(a>c?a:c):(b>c?b:c));
    printf("%d is greatest among three nos.",big);
    return 0;
}