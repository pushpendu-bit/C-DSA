#include<iostream>
using namespace std;
bool palindrome(string name,  int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        if(name[start] != name[end]){
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
    string name;
    cout << "Enter the name : ";
    cin >> name;

    int n = name.size();

    if(palindrome(name,n)){
        cout << "It is palindrome";
    }
    else {
        cout << "It is not palindrome";
    }

    return 0;
}