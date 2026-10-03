#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {1,2,3,4,5};

    // vec.insert(vec.begin()+1, 29);

    vec.insert(vec.begin()+1, 3, 29);

    for(int x : vec){
        cout << x << endl;
    }

    // cout << vec[2];
    return 0;
}