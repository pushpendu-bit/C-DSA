#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    // Check whether multiplication is possible
    if (n != p)
    {
        printf("Matrix multiplication not possible: ");
        printf("column count of A does not match row count of B\n");
        return 0;
    }

    // Dynamically allocate matrices
    int **A = (int **)malloc(m * sizeof(int *));
    int **B = (int **)malloc(p * sizeof(int *));
    int **C = (int **)malloc(m * sizeof(int *));

    for (i = 0; i < m; i++)
        A[i] = (int *)malloc(n * sizeof(int));

    for (i = 0; i < p; i++)
        B[i] = (int *)malloc(q * sizeof(int));

    for (i = 0; i < m; i++)
        C[i] = (int *)malloc(q * sizeof(int));

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (i = 0; i < m; i++)
        free(A[i]);

    for (i = 0; i < p; i++)
        free(B[i]);

    for (i = 0; i < m; i++)
        free(C[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}