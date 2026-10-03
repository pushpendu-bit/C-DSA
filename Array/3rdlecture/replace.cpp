#include<iostream>
#include<string>
using namespace std;
// char checkspace(char ch){
//     if(ch == ' '){
//         ch  = '?40';
//     }
//     return ch;

// }
string update(string str){
    string ans = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            ans += "?40";
        }
        else{
            ans += str[i];
        }
    }
    return ans;
}
int main(){
    string s;
    cout << "Enter phrase : ";
    getline(cin,s);

    cout << update(s);

    return 0;
}
