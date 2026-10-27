#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* mergeTwoLL(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    vector<int> arr;
    while(temp1 != NULL){
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        arr.push_back(temp2->data);
        temp2 = temp2->next;
    }

    sort(arr.begin(), arr.end());

    Node* newHead = NULL;
    Node* tail = NULL;
    for(int x: arr){
        Node* newNode = new Node(x);
        if(newHead == NULL){
            newHead = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return newHead;
}
int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(4);
    head1->next->next = new Node(10);

    Node* head2 = new Node(2);
    head2->next = new Node(5);
    head2->next->next = new Node(9);

    Node* result = mergeTwoLL(head1,head2);

    while(result != NULL){
        cout << result->data << "->";
        result = result->next;
    }
    cout<<"NULL";

    return 0;
}