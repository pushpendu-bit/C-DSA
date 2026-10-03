#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>>sum(int arr[], int n, int s)
{
    vector<pair<int,int>> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                pair<int,int> temp;
                temp.first=min(arr[i], arr[j]);
                temp.second=max(arr[i], arr[j]);

                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());

    return ans;
}
int main()
{
    int n,s;
    cout << "Enter n and s  : "  <<endl;
    cin >> n >>s;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    vector<pair<int,int>> ans = sum(arr, n, s);
    for(auto x : ans)
    {
        cout << x.first << " " << x.second<<" ";
        cout << endl;
    }
    return 0;
}