#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

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
Node* print(Node* head){
    Node* temp = head;
    for(temp=head; temp != NULL; temp = temp->next){
        cout << temp->data << " ";
    }
    return head;
}
Node* InsertatHead(Node* head,int val){
    return new Node(val,head);
}
Node* InsertatTail(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
int main(){
    vector<int> arr = {2,3,4,5};
    Node* head = arrToLL(arr);
    head = InsertatTail(head, 91);
    print(head);
}