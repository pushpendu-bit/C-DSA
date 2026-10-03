#include <iostream>
using namespace std;
bool linearSearch(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3];
    int key;

    cout << "Enter your array : ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter your key : ";
    cin >> key;

    if (linearSearch(arr, 3, 3, key))
    {
        cout << "key is found.\n";
    }
    else
    {
        cout << "key is not found!\n";
    }

    return 0;
}