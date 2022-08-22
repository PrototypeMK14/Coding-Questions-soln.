// 45-above = pass
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int maths;
    int physics;
    int chemistry;
    int cs;
};

int main()
{
    int n, count = 0;
    float avg = 0;
    printf("Enter the no. of students in the class : ");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of maths, physics, chemistry, cs respectively for student %d : ", i + 1);
        scanf("%d%d%d%d", &s[i].maths, &s[i].physics, &s[i].chemistry, &s[i].cs);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        avg = (s[i].maths + s[i].physics + s[i].chemistry + s[i].cs) / 4;
        printf("Average marks of %d student is = %.2f\n", i + 1, avg);
        if (avg > 45)
        {
            count++;
        }
    }

    printf("\n");
    printf("Students scoring above average marks is/are = %d\n", count);
    printf("Students scoring below average marks is/are = %d\n", n - count);

    return 0;
}