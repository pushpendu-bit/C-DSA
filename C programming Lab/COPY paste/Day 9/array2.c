#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int a[], int low, int high, int key)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(a[mid] == key)
        return mid;

    else if(key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    else
        return binarySearch(a, mid + 1, high, key);
}

int main()
{
    int a[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, n - 1, key);

    if(result == -1)
        printf("\nElement not found\n");
    else
        printf("\nElement found at position %d\n", result + 1);

    return 0;
}