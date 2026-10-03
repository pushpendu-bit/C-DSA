#include <stdio.h>

int main()
{
    int a[20][20];
    int n, i, j;
    int identity = 1;
    int diagonal = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                // Main diagonal
                if (a[i][j] != 1)
                    identity = 0;
            }
            else
            {
                // Outside main diagonal
                if (a[i][j] != 0)
                {
                    identity = 0;
                    diagonal = 0;
                }
            }
        }
    }

    if (identity == 1)
        printf("Matrix is an Identity Matrix.\n");
    else
        printf("Matrix is not an Identity Matrix.\n");

    if (diagonal == 1)
        printf("Matrix is a Diagonal Matrix.\n");
    else
        printf("Matrix is not a Diagonal Matrix.\n");

    return 0;
}