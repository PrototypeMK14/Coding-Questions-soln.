#include <stdio.h>
#include <stdlib.h>

struct employee {
    char Ename[30];
    int Empid;
    struct DOJ
    {
        int date;
        int month;
        int year;
    };
    struct Salary
    {
        int Basic;
        int DA;
        int HRA;
    };
};

int main() {
    struct employee E1;
    struct DOJ d;
    struct Salary s;

    printf("Enter the employee's name : ");
    gets(E1.Ename);
    printf("Enter the employee's id : ");
    scanf("%d",&E1.Empid);

    printf("ENter the date of joining of the employee : ");
    scanf("%i%i%i",&d.date,&d.month,&d.year);

    printf("Enter the Basic pay, DA pay and HRA pay of the employee : ");
    scanf("%d%d%d",&s.Basic,&s.DA,&s.HRA);

    printf("\n---------------------Employee Details----------------------\n");
    printf("Name of employee : %s\n",E1.Ename);
    printf("Empid of employee : %d\n",E1.Empid);
    printf("Date of joining of the employee : %d/%d/%d\n",d.date,d.month,d.year);
    printf("Salary details of the employee : \nBasic Pay : %d Ruppes.\nDA : %d Ruppes.\nHRA : %d Ruppes.",s.Basic,s.DA,s.HRA);

    return 0;
}