#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> q;
    
    //greter<int> means smallest element gets highest priority

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    cout <<  " size of queue is : " << q.size();

    return 0;
}