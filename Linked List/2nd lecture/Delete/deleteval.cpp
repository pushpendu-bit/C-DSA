#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
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
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return head;
}
Node* deleteEl(Node* head,int El){
    if(head == NULL) return head;
    if(head->data == El){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == El){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrToLL(arr);
    head = deleteEl(head, 5);
    print(head);
}