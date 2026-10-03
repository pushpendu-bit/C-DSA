#include<iostream>
using namespace std;
int binerySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int  even[6] = {2,4,6,8,10,12};
    int  odd[5] = {1,3,5,7,9};
    int target;

    int evenindex = binerySearch(even, 6, 10);
    cout << "even index is :  " << evenindex << endl;

    int oddindex = binerySearch(odd, 5, 17);
    cout << "odd index is :  " << oddindex << endl;

    return 0;
}
