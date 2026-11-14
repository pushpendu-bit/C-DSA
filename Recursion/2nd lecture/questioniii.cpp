// It used backtracking and print linearly from 1 to n.
#include<iostream>
using namespace std;
void fn(int i, int n){
    if(i < 1){
        return;
    }
    fn(i-1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    fn(n, n);
}