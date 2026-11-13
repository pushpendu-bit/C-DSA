#include<iostream>
#include<vector>
#include<algorithm>
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

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertarrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head; 
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* list = new Node(4, new Node(6, new Node(1, new Node(12))));
    vector<Node*>head = {list};
    vector<int> arr;
    for(int i=0; i<head.size(); i++){
        Node* temp = head[i];
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
    }
    sort(arr.begin(),arr.end());
    Node* val = convertarrToLL(arr);
    print(val);

    return 0;

}