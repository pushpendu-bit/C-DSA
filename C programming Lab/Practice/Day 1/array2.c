#include <stdio.h>

int main()
{
    int a[20][20];
    int n, i, j;
    int identity = 1;
    int diagonal = 1;
    printf("Enter order of square matrix : ");
    scanf("%d", &n);
    
    printf("Enter elements of matrices :\n");

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
                if (a[i][j] != 1)
                {
                    identity = 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    identity = 0;
                    diagonal = 0;
                }
            }
        }
    }

    if (identity == 1)
    {
        printf("The given matrix is identity matrix.\n");
    }
    else
    {
        printf("The given matrix is not identity matrix.\n");
    }

    if (diagonal == 1)
    {
        printf("The given matrix is diagonal matrix.\n");
    }
    else
    {
        printf("The given matrix is not diagonal matrix.\n");
    }

    return 0;
}