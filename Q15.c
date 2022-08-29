// Q15-Matrix Multiplication:-
#include <stdio.h>

int main()
{
    int m, n, p, q, k, sum = 0, count;
    printf("Enter the no. of rows and columns respectively of the matrix 1 : ");
    scanf("%d%d", &m, &n);
    printf("Enter the no. of rows and columns respectively of the matrix 2 : ");
    scanf("%d%d", &p, &q);
    int m1[m][n];
    int m2[p][q];
    int mm[m][q];

    if (m != q || n != p)
    {
        printf("Matrix Multiplication is not possible!!");
    }

    else
    {
        printf("Enter the elements of the matrix 1 : ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("Enter the elements of the matrix 2 : ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                sum = 0;
                for (int k = 0; k < p; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }
                mm[i][j] = sum;
            }
        }

        printf("Multiplied Matrix :- \n");

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", mm[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}