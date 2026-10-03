#include<iostream>
using namespace std;
void tolowercase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        cout << ch;
    }
    else {
        char temp = ch- 'a' + 'A';
        cout << temp;
    }
}
int main(){
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is : " << name << endl;

    tolowercase('j');
    cout << endl;
    tolowercase('o');
    cout << endl;
    tolowercase('n');
    cout << endl;
    tolowercase('t');
    cout << endl;
    tolowercase('y');

    return 0;
}