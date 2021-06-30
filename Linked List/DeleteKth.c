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
void delete(int k)
{ 
    struct Node *prev=NULL;
    struct Node *trav=head;
     int count=0;
    while(trav)
    {
        count++;
        if(count==k)
        {
             prev->next=trav->next;
             count=0;
        }
         if(count!=0)
        {
           prev=trav;
           
        }
      trav=prev->next;       
    }
   
}

void main()
{
    int n=3;
    Insert(8);
    Insert(7);
    Insert(6);
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);

    display();
    delete(n);
    printf("\n");
    display();
}