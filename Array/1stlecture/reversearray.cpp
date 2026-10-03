#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[4] = {2,5,8,10};
    int hehe[5] = {2,4,5,7,8};

    reverse(arr, 4);
    reverse(hehe, 5);

    printarray(arr, 4);
    printarray(hehe, 5);

    return 0;
}