#include <iostream>
using namespace std;
string reversefun(string str, int n)
{
    int start = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == n || str[i] == ' ')
        {
            int left = start;
            int right = i - 1;
            while (left < right)
            {
                swap(str[left], str[right]);
                left++;
                right--;
            }
            start = i + 1;
        }
    }
    return str;
}
int main()
{
    string s;
    cout << "Enter a phrace : ";
    getline(cin, s);
    int n = s.size();

    string ans = reversefun(s, n);
    cout << ans;

    return 0;
}