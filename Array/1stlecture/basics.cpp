#include<iostream>
using namespace std;
int main(){
    int x = 29; //Declare
    cout << x << endl; //Accessing the variable




    int arr[5] = {1,2,3,4,5};
    cout << arr[3] << endl; //Accessing the element at index 3

    int a[10] = {1,2,3,4,5};
    cout << a[6] << " "  << a[2] << endl;


    int array[100] = {1};
    int n = 100;
    for(int i=0; i<n; i++){
        array[i]=1; 
    }
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }


    return 0;
}