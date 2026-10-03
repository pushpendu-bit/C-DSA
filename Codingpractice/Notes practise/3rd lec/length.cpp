#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    int len = strlen(str.c_str());

    cout << len;

    return 0;
}