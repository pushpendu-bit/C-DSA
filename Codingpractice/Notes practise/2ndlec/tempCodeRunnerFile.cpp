#include<iostream>
using namespace std;
int duplicate(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<size; i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[50];

    cout <<"Enter your array  : ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << duplicate(arr, n);

    return 0;
}