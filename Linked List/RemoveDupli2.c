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

void removeDuplicates()
{
      struct Node *trav=head;
      int max=0,i;
      while(trav)
      {
          if((trav->data)>max)
          {
              max=trav->data;
          }
          trav=trav->next;
      }

      int hash[max+1];
      for(i=0;i<max+1;i++)
       {
          hash[i]=0;
       }

        trav=head;
       while(trav)
       {
           hash[trav->data]++;
           trav=trav->next;
       }

        trav=head;
        while(trav)
       {
           if(hash[trav->data]>=1)
            {
                   hash[trav->data]=0;
                   printf("%d ",trav->data);
            }
            trav=trav->next;
       }  
}

void main()
{
    Insert(2);
    Insert(2);
    Insert(2);
    Insert(2);

    removeDuplicates();
   
}