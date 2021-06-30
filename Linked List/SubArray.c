#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first=NULL;
struct Node *head=NULL;
struct Node *last=NULL;
int count=0,max;
void calculate()
{
    struct Node *trav=first;
    while(trav!=NULL)
    {
        if((trav->data)>max)
        {
            max=trav->data;
        }
        trav=trav->next;
    }

    printf("%d ",max);
}
void push(int key,int k)
{
    struct Node *node =(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;

    if(head==NULL)
    {
        first=head=last=node;
        count++;
    }
    else
    {
        last->next=node;
        last=node;
        count++;
    }

    if(count==k)
    {
      
        calculate();
        count--;
        first=first->next;
    }

}



void subArray(int a[],int n,int k)
{
     int i;
     for(i=0;i<n;i++)
     {
         push(a[i],k);
     }
}


void main()
{
    int a[] = {8,5,10,7,9,4,15,12,90,13};
    int n=10;
    int k=4;
    subArray(a,n,k);


}