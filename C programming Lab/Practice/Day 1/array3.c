#include<stdio.h>

int main(){
    int arr[100];
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("enter elements : ");

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    ///Reverse array
    for(i=0; i<n/2; i++){
        arr[i] = arr[i]+arr[n-1-i];
        arr[n-1-i] = arr[i] - arr[n-1-i];
        arr[i] = arr[i] - arr[n-1-i];
    }

    printf("reversed array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}