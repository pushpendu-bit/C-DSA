#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,19,29};
    // int arr[3][4] =  {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //int arr[i][j] where i is row and j is column
    cout << "Enter the 2D array value : ";

    // taking input--> Row wise input
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input--> Column wise input
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arr[j][i];
        }
    }

    
    //printing the 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] <<"        ";
        }
        cout << endl;
    }

    return 0;
}