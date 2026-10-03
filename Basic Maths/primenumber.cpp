#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isprime(n)){
        cout <<"It is a prime number";
    }
    else {
        cout <<"It is not a prime number";
    }

    return 0;
}