#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void insert()
{
    int x;

    printf("Enter element: ");
    scanf("%d", &x);

    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;

    if (front == NULL)
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }

    printf("Element inserted successfully.\n");
}

void delete()
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("Queue Underflow!\n");
        return;
    }

    if (front == rear)
    {
        printf("Deleted element: %d\n", front->data);
        free(front);
        front = rear = NULL;
    }
    else
    {
        temp = front;
        printf("Deleted element: %d\n", front->data);

        front = front->next;
        rear->next = front;

        free(temp);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Circular Queue ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}