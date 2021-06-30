#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

struct Node* Create(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value;
    temp->next=NULL;
   
    return temp;
}

void PrintList(struct Node *temp)
{
    while(temp)
    {
        printf("%d %d\t",temp,temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void Reversing()
{
    struct Node *prev=NULL;
    struct Node *next=NULL;
    struct Node *current=head;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;
    }
    head=prev;
}


void main()
{
     head = Create(1);
     head->next = Create(2);
     head->next->next = Create(3);
     head->next->next->next = Create(4);
     head->next->next->next->next = Create(5);
     head->next->next->next->next->next = Create(6);

     PrintList(head);
     printf("\nAfter Reversing\n");
     Reversing();
     PrintList(head);
}