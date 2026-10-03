#include <iostream>
#include <climits>
using namespace std;
void largestrowsum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "maximum sum of a row is : " << maxi << " "  << endl;
    cout << "The row number with largest row-sum is : " << rowIndex;
}
int main()
{
    int arr[3][3];
    cout << "Enter the elements are : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    largestrowsum(arr, 3, 3);

    return 0;
}
