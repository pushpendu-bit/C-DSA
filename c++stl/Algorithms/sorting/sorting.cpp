#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // int arr[5] = {1,3,4,5,2};
    // int n = 5;

    // vector<int> vec = {1,4,2,6,5};
    // sort(vec.begin(), vec.end());
    // for(int val : vec){
    //     cout << val << " ";
    // }

    // vector<int> vec = {1,4,2,6,5};
    // sort(vec.begin(), vec.end(), greater<int>()); //by comarator greater<int>() : it returns thye value in descending order
    // for(int val : vec){
    //     cout << val << " ";
    // }

    vector<pair<int,int>> vec = {{1,4},{7,6},{5,8}};
    //we define it by first number of thew pair but if we do it by second number then we look for Custom comparators
    sort(vec.begin(), vec.end()); 
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    return 0;
}