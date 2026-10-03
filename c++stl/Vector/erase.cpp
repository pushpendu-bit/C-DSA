#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {1,2,3,4,5};

    // vec.erase(vec.begin());


    // vec.erase(vec.begin()+3);

    vec.erase(vec.begin()+1,vec.begin()+4);


    for(int x : vec){
        cout << x << endl;
    }

    // cout << vec[2];
    return 0;
}