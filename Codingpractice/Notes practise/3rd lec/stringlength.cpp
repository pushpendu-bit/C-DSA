#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cout << "Enter aa phrase : ";
    getline(cin, s);

    int length = strlen(s.c_str());
    cout << "Length : " << length ;

    return 0;
}