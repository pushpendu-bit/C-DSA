#include<stdio.h>
#define MAX 100

int deque[MAX];
int front = -1;
int rear = -1;

void InsertFront(){
    int x;

    if((front == 0 && rear == MAX-1) || front == rear+1){
        printf("Deque overflow.\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    if(front == -1){
        front = rear = 0;
    }
    else if(front == 0){
        front = MAX-1;
    }
    else {
        front--;
    }

    deque[front] = x;
}
void InsertRear(){
    int x;

    if((front == 0 && rear == MAX-1) || front == rear+1){
        printf("Deque overflow.\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    if(front == -1){
        front = rear = 0;
    }
    else if(rear == MAX-1){
       rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = x;
}
void DeleteFront(){
    if(front == -1){
        printf("Deque Underflow.\n");
        return;
    }

    printf("Deleted element : %d", deque[front]);

    if(front == rear){
        front = rear = -1;
    }
    else if(front == MAX-1){
        front = 0;
    }
    else {
        front++;
    }
}

void DeleteRear(){
    if(front == -1){
        printf("Deque Underflow.\n");
        return;
    }

    printf("Deleted element : %d", deque[rear]);

    if(front == rear){
        front = rear = -1;
    }
    else if(rear == 0){
        rear = MAX-1;
    }
    else {
        rear--;
    }
}

void display(){
    int i;

    if(front == -1){
        printf("Empty deque.\n");
        return;
    }

    printf("Deque elements : ");
    i = front;

    while(1){
        printf("%d", deque[i]);

        if(i == rear){
            break;
        }

        i  = (i+1) % MAX;
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert from Front\n");
        printf("2. Insert from Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                InsertFront();
                break;

            case 2:
                InsertRear();
                break;

            case 3:
                DeleteFront();
                break;

            case 4:
                DeleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}