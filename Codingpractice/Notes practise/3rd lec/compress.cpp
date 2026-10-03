#include<iostream>
#include<vector>
using namespace std;
int compress(vector<char> &chars){
    int i = 0;
    int n = chars.size();
    int ansidx = 0;
    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        chars[ansidx++] = chars[i];
            
        int count = j - i;
        if(count > 1){
            string cnt = to_string(count);
        
            for(char ch : cnt){
                chars[ansidx++] = ch;
            }
        }
        i=j;
    }
    return ansidx;
}
int main(){
    string s;
    cout << "Enter a string : ";
    getline(cin,s);
    vector<char> ch(s.begin(),s.end());

    int len = compress(ch);
    cout << "String er length holo : " << len << endl;
    cout << "Compresssed string is  : ";
    for(int i=0; i<len; i++){
        cout << ch[i];
    }

    return 0;
}