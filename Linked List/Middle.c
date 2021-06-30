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

void PrintList()
{
    struct Node *trav = head;
    while(trav!=NULL)
    {
        printf("%d->",trav->data);
        trav= trav->next;
    }
    printf("NULL");
}

void MiddleNumber()
{
    struct Node *fast=head;
    struct Node *small=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        small=small->next;
    }

    printf("Middle is:%d",small->data);
}

int main()
{
    int i;
    for(i=7;i>=1;i--)
    {
        Insert(i);
    }

    PrintList();
    MiddleNumber();
}