#include<iostream>
#include<vector>
using namespace std;

// size and capacity

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3); //used to add numbers in the end of an array
    vec.emplace_back(4); //just similar to pushback but have simple variation

    cout << vec.size() << endl;
    cout << vec.capacity();

    return 0;
}