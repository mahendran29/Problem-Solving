#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head,*tail;

void Insert(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value;
    temp->next=NULL;

    if(head==NULL)
    {
        head=tail=temp;
        return;
    }
 
    temp->next=head;
    head=temp;
    tail->next=head;
}

void InsertNumber(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value;
    temp->next=NULL;

    struct Node *trav=head;

    if(temp->data<trav->data)
    {
         temp->next=head;
         head=temp;
         tail->next=head;
         return;
    }
  
   while(temp->data>trav->next->data && trav->next!=head)
       trav=trav->next;
    temp->next=trav->next;
    trav->next=temp;
}


void Print(struct Node *trav)
{
   while(trav->next!=head)
   {
       printf("%d->",trav->data);
       trav=trav->next;
   }

   printf("%d\n",trav->data);
}





void main()
{
     Insert(5);
     Insert(4);
     Insert(2);
     Print(head);
     InsertNumber(1); //Inserting at the beginning
     Print(head); 
     InsertNumber(3); //Inerting after beginning
     Print(head);
     InsertNumber(6); //Inserting at the end
     Print(head);

}
