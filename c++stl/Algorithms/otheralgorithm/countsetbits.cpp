#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n = 14;
    long n2 = 15;
    long long n3 = 144;
    cout << __builtin_popcount(n)<<endl;
    cout << __builtin_popcountl(n2) << endl;
    cout << __builtin_popcountll(n3) << endl;

    return 0;
}