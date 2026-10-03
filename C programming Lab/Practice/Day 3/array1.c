#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Create the list
void create()
{
    int n, value;
    struct Node *newNode, *temp;

    printf("enter numver of nodes : ");
    scanf("%d", &n);

    head = NULL;

    printf("Enter value : ");
    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        // printf("Enter value : ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
}

void insert()
{
    int pos, value;
    struct Node *newNode, *temp;

    printf("Enter pos : ");
    scanf("%d", &pos);

    printf("Enter data : ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void delete()
{
    int pos, i;
    struct Node *temp, *del;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if (pos == 1)
    {
        del = head;
        head = head->next;
        free(del);
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        printf("Invalid posiotion!\n");
        return;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);
}

void display()
{
    struct Node *temp = head;

    if (head == NULL)
    {
        printf("List is empty!");
        return;
    }

    printf("Linked list is : ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n----SINGLY Linked LIST----\n");
        printf("1. Create\n");
        printf("2. insert\n");
        printf("3. delete\n");
        printf("4. display\n");
        printf("5. exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}