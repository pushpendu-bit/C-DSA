#include<iostream>
#include<vector>
using namespace std;

// Anothe initialisastion process

int main(){
    vector<int>vec = {1,2,3,4,5};

    vec.pop_back();
    for(int x : vec){
        cout << x << endl;
    }

    // cout << vec[2];
    return 0;
}