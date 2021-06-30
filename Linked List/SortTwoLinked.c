#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};

struct Node *head=NULL;
struct Node *move=NULL;

struct Node* Create(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value;
    temp->next=NULL;

    return temp;
}

void Print(struct Node *trav)
{
    while(trav)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}


void SortLinked(struct Node *temp1,struct Node *temp2)
{
    
    if((temp1->data)<(temp2->data))
    {
        head = move= temp1;
        temp1=temp1->next;
    }
    else
    {
        head =move= temp2;
        temp2=temp2->next;
    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if((temp1->data)<(temp2->data))
        {
          move->next = temp1;
          temp1=temp1->next;
          move=move->next;
        }
        else
        {
          move->next = temp2;
          temp2=temp2->next;
          move=move->next;
        }
    }

    for(;temp1!=NULL;temp1=temp1->next)
    {
        move->next=temp1;
    }
    for(;temp2!=NULL;temp2=temp2->next)
    {
        move->next=temp2;
    }

   // return head;
}



void main()
{
    struct Node *head1;
    struct Node *head2;

    head1 = Create(5);
    head2 = Create(2);

    head1->next=Create(10);
    head1->next->next=Create(15);
    head1->next->next->next=Create(40);

    
    head2->next=Create(3);
    head2->next->next=Create(20);
    
    Print(head1);
    Print(head2);
    printf("After Sorting:");
    SortLinked(head1,head2);
    Print(head);
}