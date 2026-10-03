#include<iostream>
#include<vector>
using namespace std;

// vec[idx] & vec.at(idx)

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);

    vec.pop_back();

    for(int x : vec){
        cout << x <<endl;
    }

    cout << endl;

    cout << "value at idx 3 : " << vec[3] << endl;
    cout << "value at idx 3 : " << vec.at(3); 
    
    return 0;
}