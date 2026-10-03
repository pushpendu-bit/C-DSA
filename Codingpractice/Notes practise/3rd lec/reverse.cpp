#include<iostream>
using namespace std;
int main(){
    char name[100];
    int i = 0, length = 0;
    cout << "Enter your nsame : ";
    cin >> name;
    while(name[i] != '\0'){
        i++;
    }
    cout << i << endl;
    return 0;
}