#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail=NULL;

void Insert(int key)
{
   struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
   node->data=key;
   if(head==NULL)
   {
       tail=node;
   }
   node->next=head;
   head=node;
}

struct Node* Middle()
{
    struct Node *slow=head;
    struct Node  *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
     return slow;
}

void ReverseHalf(struct Node *mid)
{
    struct Node *prev=NULL;
    struct Node *curr=mid;
    struct Node *next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
}

void Reorder(struct Node *mid)
{
    struct Node *middle=mid;
    struct Node *first=head;
    struct Node *last=tail;
    do
    {
        printf("%d ",first->data);
        printf("%d ",last->data);
        first=first->next;
        last=last->next;
    } while (first!=mid);
    printf("%d",last->data);
    
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
}

void main()
{
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    
    struct Node *mid=Middle();
    ReverseHalf(mid);
    Reorder(mid);
   // display();
}