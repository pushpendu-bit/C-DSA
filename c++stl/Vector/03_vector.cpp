#include<iostream>
#include<vector>
using namespace std;

// push_back,pop_back and small emplace_back explanation

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3); //used to add numbers in the end of an array
    vec.emplace_back(4); //just similar to pushback but have simple variation

    vec.pop_back(); //used to remove last element from a vector

    for(int x : vec){
        cout << x << endl;
    }
    cout << endl;

    return 0;
}