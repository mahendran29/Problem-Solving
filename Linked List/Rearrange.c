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
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=head;
    head=node;
}

void Rearrange()
{
    struct Node *even=head->next;
    struct Node *odd=head->next->next;
    struct Node *store=NULL;
    struct Node *first=head;
    struct Node *tri=head->next;

    while(tri!=NULL)
    {
       if(odd->next==NULL)
       {
           tri->next=NULL;
       }
       else
       {
         tri->next=odd->next;
       }

        store=odd;

        if(odd->next==NULL)
        {
            odd=NULL;
        }
        else
        {
            odd=odd->next->next;
        }
        
        first->next=store;
        first=first->next;
        first->next=even;
        tri=tri->next;
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
    printf("\n");
}

void main()
{
    Insert(70);
    Insert(60);
    Insert(50);
    Insert(40);
    Insert(30);
    Insert(20);
    Insert(10);
    Rearrange();
    display();

}