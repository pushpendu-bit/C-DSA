#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> :: iterator i;
    for(i=vec.begin(); i != vec.end(); i++){
        cout << *(i) << " ";
    }

    return 0;
}