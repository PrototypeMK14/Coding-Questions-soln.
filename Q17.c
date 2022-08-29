#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
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

int main()
{
    int n;
    printf("Enter the no. of employees : ");
    scanf("%d", &n);
    struct employee E1[n];
    struct DOJ d[n];
    struct Salary s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        getchar();
        printf("Enter the employee's name : ");
        gets(E1[i].Ename);

        printf("Enter the employee's id : ");
        scanf("%d", &E1[i].Empid);

        printf("ENter the date of joining of the employee in dd/mm/yyyy format : ");
        scanf("%i%i%i", &d[i].date, &d[i].month, &d[i].year);

        printf("Enter the Basic pay, DA pay and HRA pay of the employee : ");
        scanf("%d%d%d", &s[i].Basic, &s[i].DA, &s[i].HRA);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n---------------------Employee Details of %d employee ----------------------\n", i + 1);
        printf("Name of employee : %s\n", E1[i].Ename);
        printf("Empid of employee : %d\n", E1[i].Empid);
        printf("Date of joining of the employee : %d/%d/%d\n", d[i].date, d[i].month, d[i].year);
        printf("Salary details of the employee : \nBasic Pay : %d Ruppes.\nDA : %d Ruppes.\nHRA : %d Ruppes.", s[i].Basic, s[i].DA, s[i].HRA);
    }

    return 0;
}