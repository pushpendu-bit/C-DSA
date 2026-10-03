#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[100], s2[100];
    cout << "Enter s1 : ";
    cin.getline(s1, 100);
    cout << "Enter s2 : ";
    cin.getline(s2, 100);

    strcpy(s2, s1);

    cout << "s2 is : " << s2 << endl;
    cout << "s1 is : " << s1 << endl;
    
    return 0;
}