#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void Insert(){
    int x;

    printf("Enter elements : ");
    scanf("%d", &x);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = NULL;

    if(rear == NULL){
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }

    printf("Element inserted successfully.\n");
}
void Delete(){
    struct Node *temp;

    if(front == NULL){
        printf("Queue underflow.\n");
        return;
    }

    temp = front;

    printf("Deleted  element : %d", front->data);

    front = front->next;

    if(front == NULL){
        rear = NULL;
    }

    free(temp);
}