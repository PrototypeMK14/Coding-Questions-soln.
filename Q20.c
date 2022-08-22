#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    char s1[] = "Ashish";
    for (int i = 0; i < sizeof(s1); i++)
    {
        count++;
    }

    printf("String length : %d\n", count-1);

    char s2[] = " Hello!!";

    // pritnf("Concatinated string is : %s",s1+s2);

    return 0;
}