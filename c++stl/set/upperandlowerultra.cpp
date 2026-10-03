#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s = {10, 23, 45, 567347};

    auto it = s.lower_bound(45);
    if (it != s.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "No lower bound is found" << endl;
    }

    cout << "Lower bound : " << *(s.lower_bound(45)) << endl;
    cout << "Upper bound : " << *(s.upper_bound(45)) << endl;
    return 0;
}