#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
int a[10];
int count=0;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;    
    temp->next=head;
    head=temp;
    count++;
}

void Copy(struct Node *tp)
{
    
    int i=0;
    struct Node *trav = head;
    while(trav!=NULL)
    {
        a[i]=trav->data;
        trav=trav->next;
        i++;
    }
   
    i=count-1;
    
    while(tp!=NULL)
    {
        tp->data=a[i];
        tp=tp->next;
        i--;
    }
  
    
}



void PrintList()
{
    struct Node *trav = head;
    while(trav!=NULL)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }

    printf("NULL");
}

int main()
{
   int i;
   for(i=6;i>=1;i--)
   {
       Insert(i);
   }

   PrintList();
  // printf("Main:%d",head->next->data);
   Copy(head);
   printf("\n");
   PrintList();
}