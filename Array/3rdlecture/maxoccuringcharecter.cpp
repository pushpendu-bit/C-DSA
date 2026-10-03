#include<iostream>
#include<string>
using namespace std;
char getmaxoccurance(string s){
    int arr[26]={0};
    int number = 0;
    for(int i=0; i<s.size(); i++){
        int ch = s[i];
        number = ch - 'a';
        arr[number]++;
    }


    int maxi = -1;
    int ans = 0; //"ans" stores the index of the most frequent letter.
    for(int i=0; i<26; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            ans = i;
        }
    }
    return 'a'+ans;
}
int main(){
    string s;
    cout << "Enter word : ";
    cin >> s;

    cout << getmaxoccurance(s);

    return 0;
}