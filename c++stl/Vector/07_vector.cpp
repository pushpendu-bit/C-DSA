#include<iostream>
#include<vector>
using namespace std;

// vector<int>vec(size,value)

int main(){
    vector<int>vec(4,29);
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}