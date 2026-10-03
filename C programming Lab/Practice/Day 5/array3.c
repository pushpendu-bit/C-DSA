#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;
void Insert(){
    int x;

    if(rear == MAX-1){
        printf("Queue overflow!\n");
        return;
    }

    printf("Enter element : ");
    scanf("%d", &x);

    if(front == -1){
        front = 0;
    }
    rear++;

    queue[rear] = x;

    printf("Element inserted successfully.\n");
}
void delete(){
    if(front == -1 || rear < front){
        printf("Queue underflow.\n");
        return;
    }

    printf("Element deleted successfully : %d", queue[front]);
    front++;

    if(front > rear){
        front = -1;
        rear = -1;
    }
}

void display(){
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }

    for(int i=front; i<=rear; i++){
        printf("%d ", queue[i]);
    }

    printf("\n");
}
int main(){
    int choice;

    while(1){
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                Insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid function.\n");
        }
    }
    return 0;
}