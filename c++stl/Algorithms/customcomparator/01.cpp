#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<pair<int, int>> vec = {{3, 2}, {4, 1}, {7, 8}, {4, 5}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto p: vec){
        cout << p.first <<" "<< p.second <<endl;
    }
    return 0;
}