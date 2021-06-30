#include <stdio.h>
#include <stdlib.h>

struct Node 
{
   int data;
   struct Node *next;
   struct Node *prev;
};

struct Node *tail=NULL,*head=NULL;

void Insert(int key)
{
    struct Node *node =(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;
    node->prev=NULL;
    if(head==NULL)
    {
        head=tail=node;
    }
    else
    {
        tail->next=node;
        node->prev=tail;
        tail=tail->next;
    }
}

void InsertNode(int pos,int data,struct Node *head)
{
    struct Node *c=head;
    int count=0;
   do
   {
    count++;
    c=c->next;
   } while (c->next!=NULL);
   count++;

   if(pos>count)
   {
       printf("Wrong position");
       return;
   }
   struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
   node->data=data;
   node->next=NULL;
   node->prev=NULL;
   struct Node *trav=head;
   int move=pos+1;
   while(--move)
   {
       trav=trav->next;
   }
   move=pos+1;                                 

   if(move>=1&&move<count)
   {
       node->next=trav->next;
       trav->next->prev=node;
       trav->next=node;
       node->prev=trav;
   }
   else if(move==count)
   {
        tail->next=node;
        node->prev=tail;
        tail=tail->next;
   }




   
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf(" %d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}
void main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);

    
     display();
     InsertNode(2,50,head);
     display();

}