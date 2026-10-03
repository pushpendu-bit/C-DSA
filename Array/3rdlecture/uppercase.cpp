#include<iostream>
using namespace std;
void touppercase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        cout << ch;
    }
    else {
        char temp = ch - 'a' + 'A';
        cout << temp;
    }
}
int main(){
    char name[20];
    int n = 20;
    cout << "Enter your name : ";
    cin >> name;
    cout << "your name is : "<< name << endl; 

    touppercase('A');
    cout << endl;

    touppercase('b');
    cout << endl;

    touppercase('C');

    return 0;
}