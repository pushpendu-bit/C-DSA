#include<iostream>
using namespace std;
bool linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    int key;
    cout << "Enter the value of key : ";
    cin >> key;

    if(linearsearch(arr, n, key)){
        cout << "Key is found!" << endl;
    }
    else {
        cout << "Key is not found!" << endl;
    }

    return 0;
}