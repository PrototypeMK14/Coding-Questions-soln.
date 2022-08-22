#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char number[100];
    int count=0;
    printf("Enter a number : ");
    gets(number);
    int j=strlen(number)-1;
    for(int i=0;i<strlen(number);i++) {
        if(number[i]==number[j]) {
            count++;
        }
        j--;
    }

    if(count==strlen(number)) 
        printf("%s is a pallindrome number!!",number);
    else 
        printf("%s is not a pallindrome number!!",number);
    return 0;
}