#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;

void Insert(int data)
{
   struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
   node->data=data;
   node->next=NULL;
   if(head==NULL)
   {
          head=tail=node;
   }
   else
   {
       tail->next=node;
       tail=node;
   }
}

void Segregate()
{
    struct Node *even=NULL;
    struct Node *odd=NULL;
    struct Node *trav=head;
    struct Node *mid1=NULL;
    struct Node *mid2=NULL;
    while(trav)
    {
        if((trav->data%2)==0)
        {
            if(even==NULL)
            {
             mid1=even=trav; 
            }
            else
            {
                even->next=trav;
                even=trav;
            }
        }
        else
        {
             if(odd==NULL)
            {
              mid2=odd=trav; 
            }
            else
            {
                odd->next=trav;
                odd=trav;
            }

        }
        trav=trav->next;
    }
    if(even==NULL||odd==NULL)
    {
        return;
    }
    even->next=mid2;
    odd->next=NULL;
    head=mid1;
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
   Insert(1);
   Insert(3);
   Insert(5);
   Insert(7);
//    Insert(2);
//    Insert(4);
//    Insert(6);

   //display();
   Segregate();
   display();
}