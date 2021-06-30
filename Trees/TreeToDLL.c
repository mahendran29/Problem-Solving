#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root=NULL,*head=NULL,*tail=NULL;


struct Node* Create()
{
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    if(data==-1)
    {
        return 0;
    }
    node->data=data;

    printf("The left child of %d:",data);
    node->left=Create();
    printf("The right child of %d:",data);
    node->right=Create();

    return node;
}

void Convert(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node*));
    node->left=NULL;
    node->right=NULL;
    node->data=data;

    if(head==NULL)
    {
        head=tail=node;
        return;
    }

    tail->right=node;
    node->left=tail;
    tail=node;


}


void InOrder(struct Node *root)
{
    if(root==NULL)
    {
        return;
    }

    InOrder(root->left);
    Convert(root->data);
    InOrder(root->right);
}

void PrintList()
{
    struct Node *temp=tail;  //Printing in reverse order
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->left;

    }
}



void main()
{
    printf("Creation of the Tree:\n");
    root=Create();

    printf("\n---------------------------\n");
    InOrder(root);

    printf("Tree in DLL:\n");
    PrintList();
}