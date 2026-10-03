#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

//Create the list
void create(){
    int n, value;
    struct Node *newNode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head  = NULL;

    for(int i=0; i<n; i++){
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

//COunting the nodes
void count(){
    int count = 0;
    struct Node *temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    printf("Number of nodes = %d\n", count);
}

//Reversing the Linked list
void reverse(){
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    printf("List reversed successfully.\n");
}
void display(){
    struct Node *temp = head;

    if(head == NULL){
        printf("List is empty.\n");
    }

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){
    int choice;

    while(1){
        printf("\n--- SINGLY LINKED LIST ---\n");
        printf("1. Create\n");
        printf("2. Count\n");
        printf("3. Reverse\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                create();
                break;
            case 2:
                count();
                break;
            case 3:
                reverse();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice:");
            }
    }
    return 0;
}