#include<iostream>
using namespace std;
void update(int arr[], int n){
    arr[0] = 29;
    cout << " Inside the function : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}
int main(){
    int arr[3] = {1,2,3};
    update(arr, 3);
    cout << "Outside the function : ";
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}