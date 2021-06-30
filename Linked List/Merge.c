#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head1=NULL,*head2=NULL,*tail1=NULL,*tail2=NULL;
struct Node *dummy=NULL,*move=NULL;

void Insert1(int key)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    if(head1==NULL)
    {
       head1=tail1=temp;
    }
    else
    {
       tail1->next=temp;
       tail1=tail1->next;
     
    }
}

void Insert2(int key)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    if(head2==NULL)
    {
       head2=tail2=temp;
    }
    else
    {
       tail2->next=temp;
       tail2=tail2->next;
     
    }
}

void Merge(struct Node *pt1,struct Node *pt2)
{
     if((pt1->data)<(pt2->data))
    {
       dummy=move=pt1;
       pt1=pt1->next;
      // move=move->next;
     }
    else
    {
        dummy=move=pt2;
        pt2=pt2->next;
     //   move=move->next;
    }
   while(pt1!=NULL && pt2!=NULL)
   {
        if((pt1->data)<(pt2->data))
        {
             move->next=pt1;
             move=move->next;
             pt1=pt1->next;
        }
        else
        {
            move->next=pt2;
            move=move->next;
            pt2=pt2->next;
        }
   }

   for(;pt1!=NULL;pt1=pt1->next)
   {
       move->next=pt1;
       move=move->next;

   }

   for(;pt2!=NULL;pt2=pt2->next)
   {
       move->next=pt2;
       move=move->next;

   }
 

}
void PrintList(struct Node *trav)
{
    while(trav->next!=NULL)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }
    printf("%d->",trav->data);
     trav=trav->next;
     printf("%d",trav);
     printf("\n\n");
}

int main()
{
    int i;
    int a[]={1,1};
    int b[]={2,4};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
   
    for(i=0;i<n1;i++)
    {
        Insert1(a[i]);
    }

    for(i=0;i<n2;i++)
    {
        Insert2(b[i]);
   }
    PrintList(head1);
    PrintList(head2);

    Merge(head1,head2);
     PrintList(dummy);

 
}