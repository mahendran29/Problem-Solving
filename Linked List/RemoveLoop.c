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
     temp->data = key;

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

void PrintList()
{
    struct Node *temp=head;
    while(temp!=tail)
    {
        printf("%d ",temp);
        temp=temp->next;
    }
  
    printf("%d ",temp);
    temp=temp->next;
    printf("%d ",temp);

    printf("\n\n");
}

void PrintList1()
{
    printf("\n\n");
    struct Node *temp=head;
    printf("Value of Head:%d\n",temp);

    while(temp->next!=NULL)
    {
        printf("%d ",temp);
        temp=temp->next;
    }
    printf("%d ",temp);
      temp=temp->next;
    printf("%d ",temp);
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
       val->next=NULL;
       printf("Removed the self loop\n");
   }
   else
   {
       printf("Was not a self loop");
   }
}



int main()
{
   Insert(1);
     Insert(3);
      Insert(4);
       

    PrintList();
    SelfLoop(2);
    PrintList1();
}