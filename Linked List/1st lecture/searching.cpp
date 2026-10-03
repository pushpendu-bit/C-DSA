// This is wrong till now
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

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* arrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
bool searchLL(Node* head, int val){
    Node* temp = head;
    if(temp->data ==  val){
        return 1;
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {1,4,2,3};
    Node* head = arrToLL(arr);
    int value;
    cout <<"Enter value: ";
    cin >> value;
    if(searchLL(head,value)){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }
}