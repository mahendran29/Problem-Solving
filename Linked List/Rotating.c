//For rotating in Linked List, k is the position to be present in the Linked List. Unlike Arrays where k is the number of rotations

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;

    temp->next=head;
    head=temp;
}

void Rotate(int k)
{
   if(k==0)
   {
       return;
   }

   struct Node *current = head;
   int count=1;

   while(count<k&&current!=NULL)
   {
       current=current->next;
       count++;
   }

   if(current==NULL)
   {
       return;
   }

   struct Node *kthNode = current;

   while(current->next!=NULL)
    {
        current = current -> next;
    }

    current->next = head;

    head = kthNode->next;
    kthNode->next=NULL;
}

void PrintList()
{
    struct Node *trav=head;

    while(trav!=NULL)
    {
         printf("%d->",trav->data);
         trav=trav->next;
    } 
    printf("NULL");
}


int main()
{
    int i;
    for(i=6;i>=1;i--)
    {
        Insert(i);
    }
    PrintList();
    Rotate(3);
    printf("\n");
    PrintList();
}