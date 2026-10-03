#include <iostream>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        long long square = 1LL * mid * mid;
        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

double addFrac(int n, int precision, int squaretemp)
{

    double factor = 1;

    double ans = squaretemp;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        
        // factor will become 0.1, 0.01, 0.001 and so on

        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int squaretemp = squareroot(x);
    cout << "Value is : " << squaretemp;
    cout << endl;
    cout << "Value with fraction is : " << addFrac(x, 2, squaretemp);

    return 0;
}