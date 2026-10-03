#include<iostream>
using namespace std;
void tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        cout << ch;
    }
    else {
        char temp = ch- 'A' + 'a';
        cout << temp;
    }
}
int main(){
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is : " << name << endl;

    tolowercase('J');
    cout << endl;
    tolowercase('O');
    cout << endl;
    tolowercase('N');
    cout << endl;
    tolowercase('T');
    cout << endl;
    tolowercase('Y');

    return 0;
}