#include<iostream>
using namespace std;

//Pass by value(it passes copy)

void update(int n){
    n++;
}
int main(){
    int n = 5;
    cout << " Before function : " << n << endl;

    update(n);

    cout << " After function : " << n << endl;

    return 0;
}