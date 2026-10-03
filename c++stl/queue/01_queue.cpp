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

    cout << q.front() << " ";
    cout << q.back() << endl;

    q.pop();

    cout<<"After pop : " << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    return 0;
}
