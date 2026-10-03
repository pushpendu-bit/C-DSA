#include <stdio.h>

int main()
{
    int a[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reverse the array
    for (i = 0; i < n / 2; i++)
    {
        a[i] = a[i] + a[n - 1 - i];
        a[n - 1 - i] = a[i] - a[n - 1 - i];
        a[i] = a[i] - a[n - 1 - i];
    }

    printf("Reversed array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}