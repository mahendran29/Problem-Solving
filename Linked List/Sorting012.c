#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void Insert(int key)
{
   struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
   temp->data=key;
   
   temp->next=head;
   head=temp;
}

void Sort012()
{
    struct Node *trav = head;
    int count[3]={0};

    while(trav!=NULL)
    {
        count[trav->data]++;
        trav=trav->next;
    }

    trav=head;
    int i=0;
    while(trav!=NULL)
    {
        if(count[i]==0)
        {
            i++;
        }

        trav->data=i;
        count[i]--;
        trav=trav->next;
    }

    printf("\n\n");
}

void PrintList(struct Node *trav)
{
     while(trav!=NULL)
     {
         printf("%d ",trav->data);
         trav=trav->next;
     }
     printf("\n");
}

int main()
{
   int a[]={2,2,0,1};
   int n = sizeof(a)/sizeof(a[0]);
   for(int i=0;i<n;i++)
   {
       Insert(a[i]);
   }

   PrintList(head);
   Sort012();
   PrintList(head);
}