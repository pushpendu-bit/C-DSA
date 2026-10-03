#include <stdio.h>

int main()
{
    int p1[100], p2[100], sum[100];
    int d1, d2, max, i;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &d1);

    printf("Enter coefficients of first polynomial:\n");
    for (i = 0; i <= d1; i++)
        scanf("%d", &p1[i]);

    printf("Enter degree of second polynomial: ");
    scanf("%d", &d2);

    printf("Enter coefficients of second polynomial:\n");
    for (i = 0; i <= d2; i++)
        scanf("%d", &p2[i]);

    max = (d1 > d2) ? d1 : d2;

    for (i = 0; i <= max; i++)
        sum[i] = 0;

    for (i = 0; i <= d1; i++)
        sum[i] += p1[i];

    for (i = 0; i <= d2; i++)
        sum[i] += p2[i];

    printf("Sum polynomial: ");
    for (i = max; i >= 0; i--)
    {
        if (sum[i] != 0)
            printf("%dx^%d ", sum[i], i);
    }

    return 0;
}