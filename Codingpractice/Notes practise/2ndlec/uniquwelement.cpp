#include<iostream>
using namespace std;
void unique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    cout << ans;
}
int main(){
    int arr[6] = {1,2,3,4,5,1};
    int n = 5;

    unique(arr, n);

    return 0;
}