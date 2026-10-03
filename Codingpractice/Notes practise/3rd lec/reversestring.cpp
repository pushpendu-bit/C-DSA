#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int i=0;
    int j=n-1;
    while(i < j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
int getlength(char name[]){
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}
void printarray(char name[],int size){
    for(int i=0; i<size; i++){
        cout << name[i];
    }
}
int main(){
    char name[100];
    cout <<"Enter the name : ";
    cin >> name;
    
    int len = getlength(name);

    reverse(name, len);
    printarray(name, len);

    return 0;
}