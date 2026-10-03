#include<iostream>
using namespace std;
void swaparr(int arr[], int size){
    for(int i=0; i<size-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printarray(int arr[], int n){  
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    swaparr(arr, n);
    printarray(arr, n);

    return 0;
}