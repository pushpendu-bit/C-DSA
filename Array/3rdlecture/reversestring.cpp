#include<iostream>
using namespace std;
void reverse(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}
int getlength(char name[]){
    int i=0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char name[100];
    int i=0,length = 0;
    cout << "Enter your name : ";
    cin >> name;
    
    int len  = getlength(name);
    reverse(name, len);

    cout << name;
    return 0;
}