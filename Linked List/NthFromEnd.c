#include <stdio.h>
#include <stdlib.h>
int count=0;
struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*tail=NULL;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    if(head==NULL)
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
    count++;
}

void PrintList()
{
    struct Node *trav=head;
    while(trav!=NULL)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }
     printf("%d",trav);
  //   printf("NUmber of nodes:%d ",count);
  //   printf("Tail Value:%d ",tail->data);
}

void FromNth(int index)
{
    struct Node *trav=head;
    int i;
    if(index>0 && index<count)
    {
        int val = (count+1)-index;

        for(i=1;i<val;i++)
        {
            trav=trav->next;
        }

        printf("\n%d",trav->data);
    }
    else
    {
       printf("\n%d",-1);
    }

}



int main()
{
    Insert(10);
    Insert(5);
    Insert(100);
    Insert(5);
   // Insert(5);
   // Insert(6);
   // Insert(7);
   // Insert(8);
   // Insert(9);

    PrintList();
    FromNth(5);

}
