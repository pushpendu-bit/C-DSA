#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *arrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *insertbeforeHead(Node *head,int val)
{
    Node* newHead = new Node(val);
    newHead->back = nullptr;
    newHead->next = head;
    head->back = newHead;

    return newHead;
}
Node* beforeKthelement(Node *head,int val,int k)
{
    if(k == 1){
        return insertbeforeHead(head, val);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val);

    newNode->next = temp;
    temp->back = newNode;

    prev->next = newNode;
    newNode->back = prev;

    return head;
}
int main()
{
    vector<int> arr = {2, 3, 4, 5, 6};
    Node* head = arrToDLL(arr);
    head = beforeKthelement(head, 10, 3);

    print(head);

    return 0;
}