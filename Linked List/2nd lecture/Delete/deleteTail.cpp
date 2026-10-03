#include<iostream>
#include<vector>
using namespace std;
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
Node* arrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover  = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout << head->data <<" ";
        head = head->next;
    }
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    // free(temp->next);  
    //Or we can say =>
    delete temp->next;
    temp->next =  nullptr;

    return head;
}
int main(){
    vector<int> arr = {2,4,7,9};
    Node* head = arrToLL(arr);
    head = deleteTail(head);
    print(head);
}