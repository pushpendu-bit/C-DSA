#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[],int start,int end, int key){
    if(start  > end){
        return -1;
    }

    int mid = start  + (end-start)/2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        return BinarySearch(arr, mid+1, end, key);
    }
    else{
        return BinarySearch(arr, start, mid-1, key);
    }
}

int main(){
    int arr[100], n, key, result;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);

    printf("Sorted array : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("Enter key for search : ");
    scanf("%d", &key);

    result = BinarySearch(arr, 0, n-1, key);

    if(result == -1){
        printf("Element not found.\n");
    }
    else{
        printf("Element found at position %d\n", result+1);
    }

    return 0;
}