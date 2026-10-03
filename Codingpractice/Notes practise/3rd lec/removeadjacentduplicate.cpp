#include<iostream>
#include<vector>
using namespace std;
string removeduplicates(vector<char> ch){
    string s;
    for(int i=0; i<ch.size()-1; i++){
        for(int j=0; j<ch.size(); j++){
            if(ch[i] == ch[j]){
                s.erase(i,2);
            }
        }
    }
    return s;
}
int main(){
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    vector<char> ch;
    ch = {s.begin(), s.end()};

    cout << removeduplicates(ch);

    return 0;
}
