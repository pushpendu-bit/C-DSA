#include<iostream>
using namespace std;
void printfun(int arr[], int size){

    cout << "Printing the array";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "array function printing done!!\n";
}
int main(){

    int firstarr[5] = {1,2,3,4,5};
    printfun(firstarr, 5);

    cout << "everything is good!!\n";

    int secondarr[5] = {1,2,3,4,5};
    printfun(secondarr, 5);

    cout << "everything is good!!\n";
        

    return 0;
}