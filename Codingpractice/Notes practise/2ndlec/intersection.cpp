#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> intersection(int arr[], int brr[], int N, int M)
{
    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < N && j < M)
    {
        if (arr[i] == brr[j])
        {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] > brr[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main()
{
    int N;
    cout << "Enter bthe size of the 1st array (N) : ";
    cin >> N;
    int M;
    cout << "Enter bthe size of the 2nd array (M) : ";
    cin >> M;
    int arr[50];
    int brr[50];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < M; j++)
    {
        cin >> brr[j];
    }

    sort(arr, arr+N);
    sort(brr, brr+M);

    vector<int> val = intersection(arr, brr, N, M);

    if(val.empty()){
        cout << -1;
    }
    else {
        for(auto x : val){
            cout << x <<" ";
        }
    }

    return 0;
}