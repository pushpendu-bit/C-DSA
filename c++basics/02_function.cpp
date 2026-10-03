#include<iostream>
using namespace std;
// take two numbers and print their sum

// method 1: 
// void add(int a, int b){
//     cout << a+b;
// }
// int main(){
//     int a, b;
//     cout<< "value of a is : " ;
//     cin >> a;
//     cout << "value of b is : ";
//     cin >> b;
//     cout << "result is : ";
//     add(a,b);  
//     return 0;

//method 2:
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1,num2);
    cout<<result;
    return 0;
}