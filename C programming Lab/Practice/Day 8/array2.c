#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//Create
struct Node *create(int value){
    struct Node* newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//Insert
struct Node *Insert(struct Node* root, int value){
    if(root == NULL){
        return create(value);
    }

    if(value < root->data){
        root->left = Insert(root->left, value);
    }
    else if(value > root->data){
        root->right = Insert(root->right, value);
    }

    return root;
}

//Inorder = left->root->right
void Inorder(struct Node *root){
    if(root != NULL){
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}

// preorder =  root->left->right
void preorder(struct Node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

//Postorder = left->right->root
void postorder(struct Node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    struct Node *root = NULL;
    int n, value;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &value);
        root = Insert(root, value);
    }

    printf("\nInorder: ");
    Inorder(root);

    printf("\npreorder: ");
    preorder(root);

    printf("\npostorder: ");
    postorder(root);

    return 0;

}