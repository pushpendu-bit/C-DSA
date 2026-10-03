#include<iostream>
using namespace std;
int main(){
    pair<char,pair<int,int>> p = {'J',{2,3}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    
    return 0;
}