#include <iostream>
using namespace std;
string reversehw(string s, int n)
{
    int start = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            int left =  start;
            int right = i-1;
            while(left < right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            start = i + 1;
        }
    }
    return s;
}
int main()
{
    string s;
    cout << "Enter a phrace : ";
    getline(cin, s);
    int n = s.size();

    string ans = reversehw(s, n);
    cout << ans;
    return 0;
}