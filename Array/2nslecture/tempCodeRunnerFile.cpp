#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(int arr[], int n, int brr[],int m){
    vector<int> ans;

    int i=0, j=0;
    while(i <n && j<m){
        if(arr[i]==brr[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if(arr[i] < brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;

}
int main(){
    int n, m;
    cin >> n;
    cin >> m;
    int arr[n];
    int brr[m];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int j=0; j<m; j++){
        cin >> brr[j];
    }
    vector<int> result = intersection(arr, n, brr, m);
    if(result.empty()){
        cout << -1;
    } else {
        for(int x : result){
            cout << x;
        }
    }

    return 0;

}