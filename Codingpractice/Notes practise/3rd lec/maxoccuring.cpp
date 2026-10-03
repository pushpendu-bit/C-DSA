#include<iostream>
#include<string>
using namespace std;
char getmax(string s){
    int arr[26] = {0};
    int num = 0;
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        num = ch - 'a';
        arr[num]++;
    }

    int maxi = -1; //maxi stores minm freq
    int ans = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > maxi){
            maxi = arr[i];  //arr[i] stores frequencies
            ans = i;
        }
    }
    return ans+'a';
}
int main(){
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    char jon = getmax(s);
    cout << jon;

    return 0;
}