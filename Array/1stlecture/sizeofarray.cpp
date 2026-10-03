#include<iostream>
using namespace std;
void sizefun(int arr[], int size){
    cout << "Size of an array is : ";
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}
int main(){
    int arr[10] = {2,8};
    int size = sizeof(arr)/sizeof(int);
    sizefun(arr, 10);
    cout << size;

    return 0;
}