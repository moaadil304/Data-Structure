#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root=NULL;

// creation of newnode

struct Node *createNode(int val)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=newNode->right=NULL;
    return newNode;
}

//preorder traversal

void preorder(struct Node* newNode)  // In preorder nodes are arranged Root-left-right
{
    if(newNode!=NULL)
    {
        printf("%d ",newNode->data);
        preorder(newNode->left);
         preorder(newNode->right);
    }
}

// Inorder traversal     

void inorder(struct Node* newNode)      //In inorder nodes are arranged left-root-right
{
    if(newNode!=NULL)
    {
         
        inorder(newNode->left);
        printf("%d ",newNode->data);
         inorder(newNode->right);
    }
}

// Postorder Traversal

void postorder(struct Node* newNode)     ////In postorder nodes are arranged root-left-right
{
    if(newNode!=NULL)
    {
         
        postorder(newNode->left);
         postorder(newNode->right);
         printf("%d ",newNode->data);
    }
}

 
int main() {

    // creation of tree
    
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}


