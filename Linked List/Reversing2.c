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

void Reversing()
{
    struct Node *next = NULL;
    struct Node *current = head;
    struct Node *prev = NULL;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;

        prev=current;
        current=next;
    }

    head=prev;
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
    for(i=5;i>=1;i--)
    {
        Insert(i);
    }
    PrintList();
    Reversing();
    PrintList();
}