#include<iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[20];
    int target;
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter target : ";
    cin >> target;

    if(linearsearch(arr,n,target)){
        cout << "Key is found\n";
    }
    else {
        cout <<"Key is not found\n";
    }

    return 0;
}
