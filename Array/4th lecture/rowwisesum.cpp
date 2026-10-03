#include<iostream>
using namespace std;
void rowsum(int arr[][3], int row, int col){
    int sum = 0;
    cout << " Sum of the rows are : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
        sum = 0;
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

    rowsum(arr,3, 3);

    return 0;
}
