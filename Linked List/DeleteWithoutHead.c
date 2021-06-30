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
        printf("%d ",trav->data);
        trav=trav->next;
    }
}
void delete(struct Node *trav)  
{ 
    struct Node *node=NULL;
    while(trav->next!=NULL)
    {                                    //       n t
        trav->data=trav->next->data;     // 10 4 30 30
        node=trav;
        trav=trav->next;
    }
    node->next=NULL;
     free(trav);
}

void main()
{
    int n=20;
    Insert(30);
    Insert(4);
    Insert(20);
    Insert(10);


    display();
    delete(head->next);
    printf("\n");
    display();
}