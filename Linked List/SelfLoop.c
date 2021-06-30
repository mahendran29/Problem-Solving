#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*tail=NULL;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key; 

    if(head==NULL)
    {
      head=tail=temp;   
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }

    tail->next=head;
   
}

void Loops()
{
    struct Node *temp=head;
    while(temp!=tail)
    {
        printf("%d ",temp->next);
        temp=temp->next;
    }
  
    printf("%d ",temp->next);
}

void SelfLoop(int ind)
{
    struct Node *val=head;
   for(int i=0;i<ind;i++)
   {
       val=val->next;
   }

   if(val->next==head)
   {
      printf("Self Loop");
   }
   else
   {
       printf("Not a self loop");
   }
}

int main()
{
    Insert(1);
    Insert(8);
    Insert(3);
    Insert(4);
   

    Loops();
    SelfLoop(0);
}