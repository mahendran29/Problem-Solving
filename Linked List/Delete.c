#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

void Insert(int data)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=data;
    node->next=head;
    head=node;
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d",trav->data);
        trav=trav->next;
    }
}
void delete(int count)
{ 
    struct Node *prev=NULL;
    struct Node *trav=head;
    while(--count)
    {
        prev=trav;
        trav=trav->next;
    }
    //printf("%d %d",prev->data,trav->data);
    prev->next=trav->next;
    free(trav);
}

void main()
{
    int n=2;
    Insert(9);
    Insert(2);
    Insert(5);
    Insert(1);

    display();
    delete(n);
    printf("\n");
    display();
}