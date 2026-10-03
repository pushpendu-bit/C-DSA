#include<iostream>
using namespace std;
void tolowercase(char ch){
    if(ch >= 'a' && ch<= 'z'){
        cout << ch;
    } else {
        char temp = ch-'A'+'a';
        cout << temp;
    }

}
void reverse(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
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
    char name[20];
    cout << "enter your name : ";
    cin >> name;
    int len = getlength(name);
    reverse(name, len);

    cout << name << endl;

    tolowercase('A');
    cout << endl;
    tolowercase('R');
    cout << endl;
    tolowercase('M');
    cout << endl;
    tolowercase('Y');
    cout << endl;


    return 0;
}