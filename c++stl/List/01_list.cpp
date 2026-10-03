#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;

    l.push_back(1);
    l.push_front(10);
    l.push_back(2);
    l.push_front(60);
    l.push_back(3);
    l.emplace_back(4);

    l.pop_back();
    l.pop_front();

    for(int val: l){
        cout << val << " ";
    }

    return 0;
}