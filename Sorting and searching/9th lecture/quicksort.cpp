#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int count  = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivIndex = s+count;
    swap(arr[pivIndex],arr[s]);

    int i=s , j=e;
    while(i < pivIndex && j > pivIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i < pivIndex && j > pivIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivIndex;

}
void quickSort(int arr[], int s, int e){
    //Base case
    if(s>=e){
        return;
    }

    //Partition Karenge
    int p = partition(arr, s, e);

    //Left Sub-array
    quickSort(arr, s, p-1);

    //Right Subarray
    quickSort(arr, p+1, e);

}
int main(){
    int arr[7] = {2,3,1,4,5,2,2};
    int n = 7;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}