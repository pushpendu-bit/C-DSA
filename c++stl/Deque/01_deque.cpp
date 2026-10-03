#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){

    deque<int> d;
     d.push_back(1);
     d.push_back(2);
     d.push_back(3);
     d.push_front(10);
     d.push_front(12);

     for(int val: d){
        cout << val << " ";
    }
    return 0;
}
