#include <iostream>
#include <vector>
#include <string>
using namespace std;
int compress(vector<char>& chars)
{
    int i = 0;
    int ansindex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        // bahar ageye matlab
        // vector ka traverse complete ho geya hai
        // ya fir new ya different charecter encounter kya hai


        // chars[ansindex++]=chars[i]; 23 or 24 & 25 both are same whith this.
        chars[ansindex] = chars[i];
        ansindex++;

        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansindex] = ch;
                ansindex++;
            }
        }
        i = j;
    }
    return ansindex;
}
int main()
{
    string s;
    cout << "Enter string of chars : ";
    getline(cin, s);

    vector<char> ch(s.begin(), s.end());

    int len = compress(ch);
    cout << "String's length is : " << len << endl;
    cout << "Compressed string is : ";
    for (int i = 0; i < len; i++)
    {
        cout << ch[i];
    }

    return 0;
}