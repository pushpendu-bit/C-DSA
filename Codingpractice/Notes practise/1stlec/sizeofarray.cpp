#include<iostream>
using namespace std;
void sizefun(int arr[], int size){
    cout << "Value of array are : ";
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};
    int n = 20;

    int size = sizeof(arr)/sizeof(int);

    sizefun(arr, n);

    cout << size;

    
    return 0;
}