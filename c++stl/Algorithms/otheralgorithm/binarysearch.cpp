#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << binary_search(vec.begin(), vec.end(), 78);

    return 0;
}