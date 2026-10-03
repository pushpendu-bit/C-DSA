#include<iostream>
using namespace std;
int firstoccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastoccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 2, 3, 3, 3, 6};

    cout << "First occurance of the 1st index is : " << firstoccurance(even, 6, 3) << endl;
    cout << "last occurance of the last index is : " << lastoccurance(even, 6, 3)  << endl;

    return 0;
}