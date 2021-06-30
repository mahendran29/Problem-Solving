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
    struct Node *node =(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=head;
    head=node;
}

void pairwise()
{
    struct Node *first=head;                      // f s n
    struct Node *second=head->next;               // 1 2 3 4 5 6 7 8
                                                  // s f 
    struct Node *next=NULL;   
     head=second;                                        
    while(1)
    {     next=second->next;
          second->next=first;
          first->next=next->next;
          first=next;
          second=first->next; 
                                                      
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
}


void main()
{
    Insert(8);
    Insert(7);
    Insert(6);
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    display();
}



