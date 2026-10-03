#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(){
    int x;

    printf("Enter element : ");
    scanf("%d", &x);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = top;
    top = newNode;

    printf("Element pushed successfully.\n");
}
void pop(){
    struct Node *temp;

    if(top == NULL){
        printf("Stack Underflow.\n");
        return;
    }

    temp = top;
    printf("Deleted element : %d\n", temp->data);
    
    top = top->next;
    free(temp);
}