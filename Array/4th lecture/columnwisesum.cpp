#include<iostream>
using namespace std;
void colsum(int arr[][3], int row, int col){
    int sum = 0;
    cout << " Sum of the coloums are : ";
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << arr[j][i] << endl;
        }
    }
    cout << endl;
}
int main(){
    int arr[3][3];
    cout << "Enter the elements are : ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    colsum(arr, 3, 3);

    return 0;
}
