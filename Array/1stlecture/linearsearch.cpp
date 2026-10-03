#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1; //true
        }
    }
    return 0; //false
}
int main(){
    int arr[5] = {2,7,11,9,16};
    cout << "enter key search for : ";
    int key;
    cin >> key;

    bool found = search(arr, 5, key);

    if(found){
        cout << "Key is found";
    }
    else {
        cout << "Key is not found";
    }

    return 0;
}