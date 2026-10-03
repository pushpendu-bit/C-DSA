#include<iostream>
using namespace std;
bool checkequal(int a[26],int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}
bool ispermutation(string s1, string s2){
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    if(s1.length() > s2.length()){
        return 0;
    }
    
    int i=0;
    int count2[26] = {0};
    int windowsize = s1.size();
    while(i<s1.size()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkequal(count1,count2)){
        return 1;
    }

    //sliding window
    while(i<s2.size()){
        char newchar = s2[i];
        int newindex = newchar - 'a';
        count2[newindex]++;

        char oldchar = s2[i-windowsize];
        int oldindex = oldchar - 'a';
        count2[oldindex]--;

        if(checkequal(count1,count2)){
            return 1;
        }

        i++;

    }
    return 0;

}
int main(){
    string s1, s2;
    cout <<"Enter S1 : ";
    getline(cin,s1);
    cout <<"Enter S2 : ";
    getline(cin,s2);

    if(ispermutation(s1,s2)){
        cout << true;
    }
    else {
        cout << false;
    }

    return 0;
}