#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }

    printf("Element not found.\n");
}

void binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at position %d.\n", mid + 1);
            return;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("Element not found.\n");
}

int main()
{
    int arr[100], key, n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Sorting the given array
    bubbleSort(arr, n);
    printf("Sorted arrray : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter elements to Search : ");
    scanf("%d", &key);

    printf("\n1. Linear Search");
    printf("\n2. Binary Search");

    printf("\nEnter choice");
    scanf("%d", &choice);

    if(choice == 1){
        linearSearch(arr, n, key);
    }
    else if(choice == 2){
        binarySearch(arr, n, key);
    }
    else{
        printf("Invalid choice\n");
    }

    return 0;

}