#include<iostream>
using namespace std;
int main(){
    char ch = 'J';
    cout << sizeof(ch) << endl;

    char* c = &ch;
    cout << sizeof(c);
    return 0;
}