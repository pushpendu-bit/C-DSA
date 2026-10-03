#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void insertFront()
{
    int x;

    printf("Enter element: ");
    scanf("%d", &x);

    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = front;

    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        front->prev = newNode;
        front = newNode;
    }

    printf("Element inserted from front.\n");
}

void insertRear()
{
    int x;

    printf("Enter element: ");
    scanf("%d", &x);

    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = rear;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Element inserted from rear.\n");
}

void deleteFront()
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("Deque Underflow!\n");
        return;
    }

    temp = front;

    printf("Deleted element: %d\n", front->data);

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        front->prev = NULL;
    }

    free(temp);
}

void deleteRear()
{
    struct Node *temp;

    if (rear == NULL)
    {
        printf("Deque Underflow!\n");
        return;
    }

    temp = rear;

    printf("Deleted element: %d\n", rear->data);

    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        rear = rear->prev;
        rear->next = NULL;
    }

    free(temp);
}
void display(){
    struct Node *temp;
    int i;
    if(front == NULL){
        printf("Dequeue is empty.\n");
        return;
    }

    temp = front;

    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Deque using Linked List ---\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertFront();
                break;

            case 2:
                insertRear();
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}