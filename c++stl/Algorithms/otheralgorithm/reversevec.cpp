#include <iostream>
#include <vector>
#include <algorithm> // Required for reverse()
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // reverse(vec.begin(), vec.end());
    reverse(vec.begin() + 0, vec.begin() + 4); // if we want to reverse specific elements

    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}