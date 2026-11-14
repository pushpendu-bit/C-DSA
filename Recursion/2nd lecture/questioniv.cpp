// It used backtracking and print from n to 1.
#include<iostream>
using namespace std;
void fn(int i, int n){
    if(i > n){
        return;
    }
    fn(i+1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    fn(1, n);
}