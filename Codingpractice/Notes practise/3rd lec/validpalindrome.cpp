#include<iostream>
using namespace std;
bool valid(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ){
        return 1;
    }
    return 0;
}
char tolower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else {
        return ch-'A'+'a';
    }
}
string removena(string s){
    int i = 0;
    int j = s.size()-1;
    string temp = "";
    for(int i=0; i<s.size(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    return temp;
}
bool palindrome(string s){
    int start=0;
    int end=s.size()-1;
    while(start <= end){
        if(s[start] != s[end]){
            return 0;
        }
        else 
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main(){
    string s;
    cout << "Enter a phrase : ";
    getline(cin,s);

    string temp = removena(s);
    for(int i=0; i<temp.size(); i++){
        temp[i] = tolower(temp[i]);
    }
    if(palindrome(temp)){
        cout <<"It is a valid palindrome";
    }
    else {
        cout <<"It is not a valid palindrome";
    }
    return 0;
}
