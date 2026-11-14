#include<iostream>
using namespace std;
void fn(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    fn(n-1);
}
int main(){
    int n;
    cin >> n;
    fn(n);
}