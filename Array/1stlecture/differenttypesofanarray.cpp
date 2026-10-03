#include<iostream>
using namespace std;
void sizefun(int arr[], int size){
    cout << "Size of an array is : ";
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}
int main(){
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << " " << ch[1] << endl; 
    
    cout << "values of indices in this array is : ";
    for(int i=0; i<5; i++){
        cout << ch[i] << " " << endl;
    }

    double firstarray[12];
    float secondarray[1];
    long long thirdarray[12];
    bool fourtharray[199];

    cout << "All is clear!";

    return 0;
}