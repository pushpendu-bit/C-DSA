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
    {
        return createNode(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

// Search
struct Node *Search(struct Node *root, int value)
{
    if (root == NULL || root->data == value)
    {
        return root;
    }

    if (value < root->data)
    {
        return Search(root->left, value);
    }
    else
    {
        return Search(root->right, value);
    }
}

// Find minimum node
struct Node *findMin(struct Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }

    return root;
}

// delete
struct Node *DeleteNode(struct Node *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (value < root->data)
    {
        root->left = DeleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = DeleteNode(root->right, value);
    }
    else
    {
        // No child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        // Only right child
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        // Only left child
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Two child
        else
        {
            struct Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = DeleteNode(root->right, temp->data);
        }
    }
    return root;
}

// Inorder just yo display BST
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main(){
    struct Node *root = NULL;
    struct Node *result;

    int n, value;

    printf("Enter number of nodes : ");
    scanf("%d", &n);

    printf("Enter elements : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nBST: ");
    inorder(root);



    //Insert
    printf("Enter eelements for insert: ");
    scanf("%d", &value);

    root = insert(root, value);

    printf("BST after insertion : ");
    inorder(root);

    //Search
    printf("enter element for insertion : ");
    scanf("%d", &value);

    result = Search(root, value);

    if(result != NULL){
        printf("Element found!");
    }
    else{
        printf("Element Not found.\n");
    }

    //DElete
    printf("Enter element for deletion : ");
    scanf("%d", &value);

    root = DeleteNode(root, value);

    printf("BST after deeletion : ");
    inorder(root);


    return 0;

}