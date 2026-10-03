#include<iostream>
using namespace std;
// pass by value [it takes the copy of the original]
void dosomething(string s){
    s[0] = 'J'; // for single charecter we use only ' ' this.
    cout << s << endl;
}
int main(){
    string s;
    s = "Ghonty"; // for a whole word we use only " " this.
    dosomething(s); // function call
    cout << s << endl;

    return 0;
}

// pass by value

// #include<iostream>
// using namespace std;
// void numX(int a){
//     cout<< a << endl;
//     a += 10;
//     cout<< a << endl;
//     a += 10;
//     cout<< a << endl;
//     a += 10;
//     cout<< a << endl;
//     a += 10;

// }
// int main(){
//     int a;
//     cin >> a;
//     numX(a);
//     cout << a;
//     return 0;
// }