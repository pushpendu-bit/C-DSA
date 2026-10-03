#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> vec={{1,2},{3,5},{4,6}};

    vec.push_back({8,9});
    vec.emplace_back(8,9);

    for(pair<int,int>p : vec){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    return 0;
}