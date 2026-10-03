#include<iostream>
#include<vector>
using namespace std;
// We can use class in the place of struct both works in same manner
//In industry class is more used than struct
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    vector<int> arr  = {1,2,3,4,5};

    Node* y  = new Node(arr[0]);
    cout << y->data <<endl;
    cout << y->next;
}