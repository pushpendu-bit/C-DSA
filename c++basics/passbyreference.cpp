#include<iostream>
using namespace std;
void dosomething(int &a){
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
}
int main(){
    int a;
    cin >> a;
    dosomething(a);

    cout << a << endl;
}