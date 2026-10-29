#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::reverse_iterator i;

    for(i = vec.rbegin(); i != vec.rend(); i++) {
        cout << *(i) << " ";
    }

    return 0;
}