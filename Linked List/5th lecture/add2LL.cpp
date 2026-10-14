#include<iostream>
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
Node* arrToLL1(vector<int>& arr1){
    Node* head1 = new Node(arr1[0]);
    Node* temp1 = head1;
    for(int i=1; i<arr1.size(); i++){
        Node* newNode = new Node(arr1[i]);
        temp1->next = newNode;
        temp1 = newNode;
    }
    return head1;
}
Node* arrToLL2(vector<int>& arr2){
    Node* head2 = new Node(arr2[0]);
    Node* temp2 = head2;
    for(int i=1; i<arr2.size(); i++){
        Node* newNode = new Node(arr2[i]);
        temp2->next = newNode;
        temp2 = newNode;
    }
    return head2;
}
void print(Node* result){
    Node* temp = result;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* addLL(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;
    int carry = 0;
    while(temp1 != NULL || temp2 != NULL){
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        current->next = newNode;
        current = current->next;

        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }

    if(carry){
        Node* newNode = new Node(carry);
        current->next = newNode;
    }
    Node* result = dummyNode->next;
    delete dummyNode;
    return result;
}
int main(){
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {1,2,3,4,6,7};
    Node* head1 = arrToLL1(arr1);
    Node* head2 = arrToLL2(arr2);
    Node* result = addLL(head1,head2);

    print(result);

    return 0;
}