// Palindrome
#include<iostream>
using namespace std;

bool fn(int arr[], int i, int n){
    if(i >= n/2) return true;

    if(arr[i] != arr[n-i-1]){
        return false;
    }

    return fn(arr, i+1, n);
}

int main(){
    int arr[20];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(fn(arr, 0, n)){
        cout << "Palindrome";
    }
    else{
        cout << "Not a palindrome";
    }

    return 0;
}