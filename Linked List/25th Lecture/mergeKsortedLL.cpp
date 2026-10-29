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
Node* convertarrtoLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
int main(){
    Node* list1 = new Node(1, new Node(3, new Node(4)));
    Node* list2 = new Node(1, new Node(4, new Node(7)));
    Node* list3 = new Node(4, new Node(5));

    vector<Node*> list = {list1, list2, list3};
    vector<int> arr;

    for(int i=0; i<list.size(); i++){
        Node* temp = list[i];
        while(temp !=  NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
    }
    sort(arr.begin(),arr.end());

    Node* head = convertarrtoLL(arr);
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    
    return 0;
}