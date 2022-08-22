// Q15-Matrix Multiplication:-
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p, q;
    printf("Enter the no. of rows and columns respectively of the matrix 1 : ");
    scanf("%d%d", &m, &n);
    printf("Enter the no. of rows and columns respectively of the matrix 2 : ");
    scanf("%d%d", &p, &q);
    int m1[m][n];
    int m2[p][q];

    if (n != p || m != q)
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
                scanf("%d", m1[i][j]);
            }
        }

        printf("Enter the elements of the matrix 2 : ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", m2[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("");
            }
        }
    }
    return 0;
}