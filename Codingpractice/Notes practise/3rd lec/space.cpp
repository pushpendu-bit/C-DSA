#include<iostream>
using namespace std;
string removespace(string s){
    string ans;

    for(char ch : s){
        if(ch == ' '){
            ans += "?40"; 
        }
        else {
            ans += ch;
        }
    }
    return ans;
}
int main(){
    string s;
    cout << " enter a string : ";
    getline(cin, s);

    cout << removespace(s);

    return 0;
}