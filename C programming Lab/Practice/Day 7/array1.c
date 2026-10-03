#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void insert(){
    int x;

    printf("Enter element : ");
    scanf("%d", &x);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;

    if(front == NULL){
        front = rear = newNode;
        rear->next = front;
    }
    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }

    printf("Element inserted successfullly .\n");
}

void delete(){
    struct Node *temp;

    if(front == NULL){
        printf("Queue underflowed.\n");
        return;
    }

    if(front == rear){
        printf("Deleted element : %d", front->data);
        free(front);
        front = rear = NULL;
    }
    else{
        temp = front;
        printf("Element deleted : %d", front->data);
        front = front->next;
        rear->next = front;

        free(temp);
    }
}
void display(){
    struct Node *temp;

    if(front == NULL){
        printf("circular queue is empty.\n");
        return;
    }

    temp = front;

    do{
        printf("%d", temp->data);
        temp = temp->next;
    }while(temp != front);

    printf("\n");
}