#include<iostream>
#include<string>
using namespace std;
bool valid(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
        return 1;
    }
    return 0;
}
char tolower(char ch){
    if(ch>='a' && ch<='z' || ch>='0' && ch<='9'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }

}
string removena(string s){
    int i=0;
    string temp = "";
    for(int i=0; i<s.size(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    return temp;
}
bool checkpalindrome(string a){
    int start = 0;
    int end = a.size()-1;
    while(start <= end){
        if(a[start] != a[end]){
            return 0;
        }
        else {
            start++;
            end--;
        }
    }
    return 1;

}
int main(){
    string s;
    cout << "Enter phrase : ";
    getline(cin, s);

   string temp = removena(s);

   for(int i=0; i<temp.size(); i++){
        temp[i] = tolower(temp[i]);
   }

   if(checkpalindrome(temp)){
        cout << "palindrome";
   } else {
    cout << "Not palindrome";
   }

   return 0;
}