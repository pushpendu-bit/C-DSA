#include<iostream>
using namespace std;
int main(){
    char name[100];
    cout << "What is your name ? " << endl;
    cin >> name;
    name[2] = '\0';
    cout << "My name is : " << name;
    
    return 0;
}