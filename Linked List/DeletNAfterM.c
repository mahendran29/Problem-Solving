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
void delete(int n,int m)
{ 
    struct Node *prev=NULL;
    struct Node *curr=head;
    int count1=0,count2=0;
    while(curr->next!=NULL)
    {
        count1++;         
        if(count1==n)
        {
            prev=curr;
            while(count2<m)
            {
              curr=curr->next;
              count2++;
            }
            prev->next=curr->next;
            curr=prev->next;
            count1=0;
            count2=0;
        }
        if(count1!=0)
        {
            prev=curr;
            curr=curr->next;
        }
        

    }
   
}

void main()
{
    int n=6,m=1;
    Insert(6);
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
   // Insert(1);
    //Insert(9);

    display();
    delete(n,m);
    printf("\n");
    display();
}