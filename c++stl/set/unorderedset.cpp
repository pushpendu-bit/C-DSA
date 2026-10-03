#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
   
    s.insert(20);
    s.insert(20); //multimap can store multiple key
    s.emplace(20);
    s.emplace(39);
    s.emplace(27);
    

    for (auto p : s)
    {
        cout << p << endl;
    }
    cout << endl;

    return 0;
}