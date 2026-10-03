#include <stdio.h>

int main()
{
    int a[20][20];
    int sparse[100][3], transpose[100][3];
    int rows, cols;
    int i, j, k = 1, t = 1;
    int nonzero;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix:\n");

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    /* Count non-zero elements */
    nonzero = 0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (a[i][j] != 0)
                nonzero++;

    /* Header */
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonzero;

    /* Convert to sparse */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = a[i][j];
                k++;
            }
        }
    }

    printf("\nSparse Matrix:\n");

    for (i = 0; i <= nonzero; i++)
        printf("%d %d %d\n",
               sparse[i][0],
               sparse[i][1],
               sparse[i][2]);

    /* Transpose header */
    transpose[0][0] = cols;
    transpose[0][1] = rows;
    transpose[0][2] = nonzero;

    /* Transpose using sparse representation */
    for (j = 0; j < cols; j++)
    {
        for (i = 1; i <= nonzero; i++)
        {
            if (sparse[i][1] == j)
            {
                transpose[t][0] = sparse[i][1];
                transpose[t][1] = sparse[i][0];
                transpose[t][2] = sparse[i][2];
                t++;
            }
        }
    }

    printf("\nTranspose in Sparse Format:\n");

    for (i = 0; i <= nonzero; i++)
        printf("%d %d %d\n",
               transpose[i][0],
               transpose[i][1],
               transpose[i][2]);

    /* Memory comparison */
    printf("\nMemory comparison:\n");
    printf("Original matrix elements = %d\n", rows * cols);
    printf("Sparse representation elements = %d\n",
           (nonzero + 1) * 3);

    if ((nonzero + 1) * 3 < rows * cols)
        printf("Triple format is advantageous.\n");
    else
        printf("Triple format is not advantageous.\n");

    return 0;
}