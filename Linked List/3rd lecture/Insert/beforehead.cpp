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
        Node *temp = new Node(arr[i], nullptr, head);
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
int main()
{
    vector<int> arr = {2, 3, 4, 5, 6};
    Node* head = arrToDLL(arr);
    head = insertbeforeHead(head, 1);

    print(head);

    return 0;
}