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
    struct Node *store1=NULL;
    struct Node *store2=NULL;
    while(tail!=mid)
    {
       store1=first->next;
       store2=tail->next;
       first->next=tail;
       tail->next=store1;
       first=store1;
       tail=store2;
    }
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
    // Insert(5);
     Insert(4);
    Insert(3);
    Insert(7);
    Insert(1);
    
    struct Node *mid=Middle();
    ReverseHalf(mid);
    Reorder(mid);
    display();
}