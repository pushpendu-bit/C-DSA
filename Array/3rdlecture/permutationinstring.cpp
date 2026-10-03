#include <iostream>
using namespace std;
bool checkequal(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkinclusion(string s1, string s2)
{
    // charecter count array
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    if(s1.length() > s2.length()){
        return 0;
    }

    // traverse s2 string in windows of size s1 length and compare
    int i = 0;
    int windowssize = s1.length();
    int count2[26] = {0};
    while (i < s1.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkequal(count1,count2)){
        return 1;
    }

    // sliding window
    while (i < s2.length())
    {
        char newchar = s2[i];
        int newindex = newchar - 'a';
        count2[newindex]++;

        char oldchar = s2[i - windowssize];
        int oldindex = oldchar - 'a';
        count2[oldindex]--;

        if (checkequal(count1, count2))
        {
            return true;
        }

        i++;
    }
    return 0;
}

int main()
{
    string s1, s2;
    cout << " Enter s1 : ";
    cin >> s1;
    cout << " Enter s2 : ";
    cin >> s2;


    if (checkinclusion(s1, s2))
        cout << "True";
    else
        cout << "False";



    return 0;
}