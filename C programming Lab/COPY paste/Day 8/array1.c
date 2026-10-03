#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node *createNode(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert
struct Node *insert(struct Node *root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);

    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Search
struct Node *search(struct Node *root, int value)
{
    if (root == NULL || root->data == value)
        return root;

    if (value < root->data)
        return search(root->left, value);

    return search(root->right, value);
}

// Find minimum node
struct Node *findMin(struct Node *root)
{
    while (root->left != NULL)
        root = root->left;

    return root;
}

// Delete
struct Node *deleteNode(struct Node *root, int value)
{
    if (root == NULL)
        return NULL;

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        // Case 2: Only right child
        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        // Case 2: Only left child
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Two children
        else
        {
            struct Node *temp = findMin(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

// Inorder just to display BST
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    struct Node *result;

    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nBST: ");
    inorder(root);


    
    // Insert
    printf("\n\nEnter element to insert: ");
    scanf("%d", &value);

    root = insert(root, value);

    printf("BST after insertion: ");
    inorder(root);



    // Search
    printf("\n\nEnter element to search: ");
    scanf("%d", &value);

    result = search(root, value);

    if (result != NULL)
        printf("Element found.");
    else
        printf("Element not found.");



    // Delete
    printf("\n\nEnter element to delete: ");
    scanf("%d", &value);

    root = deleteNode(root, value);

    printf("BST after deletion: ");
    inorder(root);

    return 0;
}