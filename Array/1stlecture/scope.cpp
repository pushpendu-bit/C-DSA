#include<iostream>
using namespace std;
void update(int arr[], int size){
    cout << "Inside the function" << endl;

    // updating the first element of an array
    arr[0] = 16;
    arr[1] = 61;
    for(int i=0; i<3; i++){
        cout << arr[i]  << " ";
    }
    cout << endl;
    cout << "Inside the main" << endl;
}
int main(){
    int arr[3] = {1,3,2};

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    return 0;
}