#include<iostream>
#include<climits>
using namespace std;
void largerowsum(int a[][4],int row,int col){
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum +=  a[i][j];
        }
        if(sum > maxi){
            maxi = sum;
        }
    }
    cout <<"Maximum or large rowsum is : " << maxi;
}
int main(){
    int arr[3][4];
    cout <<"Enter array elements : ";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    largerowsum(arr, 3, 4);

    return 0;
}