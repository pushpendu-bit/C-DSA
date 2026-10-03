#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){

    deque<int> d = {1,2,3,4,5,6};

    for(int val: d){
        cout << val << " ";
    }
    
    return 0;
}
