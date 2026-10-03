#include<iostream>
#include<vector>
using namespace std;

// vector<int>vec2(vec1)

int main(){
    vector<int>vec1 = {1,2,3,4,5,6,7,8,9,10};

    vector<int>vec2(vec1);

    vec2.push_back(11);


    for(int val:vec2){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}