#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<int,int>>pairsum(int arr[], int size, int s){
    vector<pair<int,int>> ans;

    for(int i=0; i<size; i++){
        pair<int,int> temp;
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == s){
                temp.first = min(arr[i],  arr[j]);
                temp.second = max(arr[i],  arr[j]);

                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;

}
int main(){
    int n, s;
    cout << "Enter the value of n and s : ";
    cin >> n >> s;
    int arr[50];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<pair<int,int>> ans = pairsum(arr, n, s);
    for(auto x: ans){
        cout << x.first <<" "<<x.second;
        cout << endl;
    }

    return 0;
}