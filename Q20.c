#include <stdio.h>

void sl(char s1[30], char s2[30], int *count1, int *count2);
void compare(char s1[30], char s2[30], int count1, int count2, int a);
void concat(char s1[30], char s2[30], int count1, int count2);

int main()
{
    char s1[30];
    char s2[30];
    int count1 = 0, count2 = 0, a = 0;
    printf("Enter the 1st string : ");
    gets(s1);

    printf("Enter the 2nd string : ");
    gets(s2);

    sl(s1, s2, &count1, &count2);
    compare(s1, s2, count1, count2, a);
    concat(s1, s2, count1, count2);
    return 0;
}

void sl(char s1[30], char s2[30], int *count1, int *count2)
{
    int i = 0;
    while (1 > 0)
    {
        if (s1[i] == '\0')
        {
            break;
        }

        *count1 += 1;
        i++;
    }
    i = 0;
    while (1 > 0)
    {
        if (s2[i] == '\0')
        {
            break;
        }

        *count2 += 1;
        i++;
    }

    printf("String length of string s1-%s is : %d\n", s1, *count1);
    printf("String length of string s2-%s is : %d\n", s2, *count2);
}

void compare(char s1[30], char s2[30], int a, int count1, int count2)
{
    a = 0;
    for (int i = 0; i < count1 && i < count2; i++)
    {
        if (s1[i] == s2[i])
        {
            a++;
        }
    }

    if (a == count1)
    {
        printf("%s and  %s are equal strings\n", s1, s2);
    }

    else
    {
        printf("%s and %s are unequal strings\n", s1, s2);
    }
}

void concat(char s1[30], char s2[30], int count1, int count2)
{
    char s3[count1 + count2];
    int l;
    int j;
    for (l = 0; l < count1; l++)
        s3[l] = s1[l];
    int k = 0;

    for (j = count1; j < (count1 + count2); j++)
    {
        s3[j] = s2[k];
        k++;
    }

    int i = 0;
    while (1 > 0)
    {
        printf("%c", s3[i]);
        if (s3[i] == '\0')
        {
            break;
        }
        i++;
    }
}