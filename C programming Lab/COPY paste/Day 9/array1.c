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

void linearSearch(int a[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }

    printf("Element not found\n");
}

void binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            return;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Element not found\n");
}

int main()
{
    int a[100], n, i, key, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Pre-processing: sort the array */
    bubbleSort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    printf("\n1. Linear Search");
    printf("\n2. Binary Search");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        linearSearch(a, n, key);
    }
    else if(choice == 2)
    {
        binarySearch(a, n, key);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}