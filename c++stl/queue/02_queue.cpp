#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;

    q.push(1);
    q.push(3);
    q.push(31);
    q.push(30);
    q.push(18);

    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
    cout << endl;

    cout << q.size(); 

    return 0;
}
