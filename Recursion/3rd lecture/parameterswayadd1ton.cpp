#include<iostream>
using namespace std;
void fn(int i,int sum){
    if(i == 0){
        cout << sum;
        return;
    }
    fn(i-1, sum+i);
}
int main(){
    int n;
    cin >> n;
    fn(n, 0);
}