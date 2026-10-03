#include<iostream>
using namespace std;
void printlikewave(int arr[][4],int row,int col){
        for(int i=0; i<col; i++){
            if(i%2  == 0){
                for(int j=0; j<row; j++){
                    cout << arr[j][i] <<" ";
                }
            }
            else{
                for(int j = row-1; j>=0; j--){
                    cout << arr[j][i] <<" ";
                }
            }
            cout << endl;
        }
        
}
int main(){
    int arr[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    printlikewave(arr, 4, 4);

    return 0;
}