#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{   
    vector<int> vec = {1,4,2,6,5};

    // cout << *(max_element(vec.begin(),vec.end()));
    cout << *(min_element(vec.begin(),vec.end()));

    cout << endl;
    return 0;
}