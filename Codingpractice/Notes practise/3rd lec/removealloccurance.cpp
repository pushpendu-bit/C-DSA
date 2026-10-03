#include<iostream>
using namespace std;
string removeoccurance(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s, part;
    cout << "Enter s : ";
    getline(cin, s);
    cout << "Enter part : ";
    getline(cin, part);

    cout << removeoccurance(s, part);

    return 0;
}