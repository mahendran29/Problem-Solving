#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;
};

struct Node* NewNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->left=NULL;
    node->right=NULL;
    node->next=NULL;
    return node;
}

struct Node *front=NULL,*rear=NULL;

void EnQueue(struct Node *add)
{
    if(front==NULL)
    {
        front=rear=add;
        front->next=NULL;
    }
    else
    {
          rear->next = add;
          rear=add;
          rear->next=NULL;
    }

   
}

struct Node* DeQueue()
{
    if(front==NULL)  
    {
        return 0;
    }

    struct Node *temp = front;
   
        front=front->next;
        return temp;
    return 0;
}

int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }

    return 0;
}

int Size()
{
    struct Node *temp = front;
    int size=0;
    while (temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    return size;
    
}


void LeftView(struct Node *root)
{
     if(root==NULL)
     {
         return;
     }
     EnQueue(root);
      while(!isEmpty())
      {
           int i;
           int size = Size();
          

           for(i=1;i<=size;i++)
           {
                struct Node *temp = DeQueue();
               if(i==1)
               {
                   printf("--%d--",temp->data);
               }

               if(temp->left != NULL)
               {
                   EnQueue(temp->left);
               }

               if(temp->right != NULL)
               {
                   EnQueue(temp->right);
               }
           }
      }
}

void main()
{
    struct Node *root = NewNode(1);   
    root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left=NewNode(4);
    root->left->left->left=NewNode(14);

   LeftView(root);
}