#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // cout << "vec.begin : " << *(vec.begin()) << endl;
    cout << "vec.end : " << *(vec.end()) << " "; // it gives garbadge value means just after the last element of the array

    return 0;
}