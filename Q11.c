#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[30];
    printf("Enter the Name of the user : ");
    gets(name);
    int units;
    float ruppes=0;
    printf("Enter the no. of units of electricity used : ");
    scanf("%d",&units);
    if(units<=200) {
        ruppes+=0.8*units;
    }
    else if(units>200 && units<=300) {
        ruppes+=0.9*units;
    }
    else {
        ruppes+=1*units;
    }

    // New Charge if total ruppes cross 400 ruppes margin.
    if(ruppes>400) {
        ruppes=ruppes+(0.15)*ruppes;
        //printf("%.2f",ruppes);
    }

    printf("%s has to pay for electricity = %.2f",name,100+ruppes);

    return 0;
}
