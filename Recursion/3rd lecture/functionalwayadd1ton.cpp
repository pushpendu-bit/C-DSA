#include<iostream>
using namespace std;
long long fn(int n){
    if(n == 0){
        return 0;
    }
    return n+fn(n-1);
    
}
int main(){
    int n;
    cin >> n;
    cout << fn(n);
}