#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s ={10,23,45,29};
    cout << "Lower bound : " << *(s.lower_bound(45)) << endl;
    cout << "Upper bound : " << *(s.upper_bound(45)) << endl;
    return 0;
}