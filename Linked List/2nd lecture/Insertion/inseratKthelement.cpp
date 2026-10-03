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

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* arrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* insertAtK(Node* head,int val,int k){
    if(head == NULL){
        return new Node(val);
    }
    if(k == 1){
        return new Node(val, head);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data  <<" ";
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,6};
    Node* head = arrToLL(arr);
    head = insertAtK(head, 5, 5);
    print(head);
    return 0;
}