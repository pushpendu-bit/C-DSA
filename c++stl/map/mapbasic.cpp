#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["chockolet"]=100;
    m["cake"]=100;
    m["Cold drinks"]=100;
    m["thumbsup"]=100;
    m["Muri"]=100;

    for(auto p: m){
        cout << p.first <<" " << p.second << endl;
    }
    cout << endl;
    return 0;
}