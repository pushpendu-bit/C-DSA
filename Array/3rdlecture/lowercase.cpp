#include<iostream>
using namespace std;
void tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        cout << ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        cout << temp;
    }
}
int main(){
    char name[20];
    int n = 20;
    cout << "Enter your name : ";
    cin >> name;
    cout << "your name is : "<< name << endl; 

    tolowercase('A');
    cout << endl;

    tolowercase('b');
    cout << endl;

    tolowercase('C');

    return 0;
}