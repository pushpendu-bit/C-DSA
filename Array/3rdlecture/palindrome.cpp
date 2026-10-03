#include<iostream>
using namespace std;
bool palindrome(char a[], int n){
    int s =  0;
    int e = n-1;
    while(s <= e){
        if(a[s] != a[e]){
            return 0;
        } else {
            s++;
            e--;
        }
    }
    return 1;
}
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
    cout << name << endl;

    cout << palindrome(name, len);
    return 0;
}