#include<iostream>
using namespace std;
int maxx(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a, b;
    cin >> a >> b;
    int result = maxx(a,b);
    cout << result;
    return 0;
}