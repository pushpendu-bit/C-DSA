#include<iostream>
using namespace std;
void names(string name){ // parameters function  
    cout<< " " << name << endl ;
}
int main(){
    string name;
    cin >> name;
    // getline(cin, name);
    names(name);

    string name2;
    cin >> name2;
    // getline(cin, name2);
    names(name2);
    return 0;
}