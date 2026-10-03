#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;

    s.push(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);


    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}