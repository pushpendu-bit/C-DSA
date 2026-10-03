#include<iostream>
#include<vector>
using namespace std;

// front and back on vector

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);

    vec.pop_back();

    for(int x : vec){
        cout << x << " " << endl;
    }

    cout << "front is : " << vec.front() << endl;
    cout << "Back is : " << vec.back();
    return 0;
}