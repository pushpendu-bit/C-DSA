//Intro to doubly linked list
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};
Node* convertoDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;  
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
    // return head;
}
int main(){
    vector<int> arr={1,3,5,9,4};
    Node* head = convertoDLL(arr);
    print(head);
}