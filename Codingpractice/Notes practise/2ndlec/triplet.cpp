#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> tripletsum(int arr[], int size, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {

                if (arr[i] + arr[j] + arr[k] == s)
                {

                    vector<int> temp;

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());

                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}
int main()
{
    int n, s;
    cout << "Enter the value of n and s : ";
    cin >> n >> s;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> ans = tripletsum(arr, n, s);
    for (auto val : ans){
        for(int x: val){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}