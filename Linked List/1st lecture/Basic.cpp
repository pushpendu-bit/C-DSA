#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr  = {1,2,3,4,5};

    // Node* y  =new Node(arr[0], nullptr);
    // cout << y;

    // Node y  = Node(arr[0], nullptr);
    // cout << y.data;
    // cout << y.next;

    Node* y  = new Node(arr[0], nullptr);
    cout << y->data <<endl;
    cout << y->next;
}