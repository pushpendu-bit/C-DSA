#include<iostream>
using namespace std;
int getsum(int* arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;

    //Variable size array
    int* arr = new int[5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = getsum(arr, n);
    cout << "The answer is :  " << ans;

    return 0;
}