#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};
struct Node *head1=NULL,*head2=NULL;

struct Node* Create(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;
    return node;
}

struct Node* Insert(int key)
{
    int size=key;
    int ch=0;
    struct Node *head=NULL;
    struct Node *tail=NULL;
    printf("Enter values for the node:");
    while(size--)
    {
        scanf("%d",&ch);
        if(head==NULL)
        {
            head=tail=Create(ch);
        }
        else
        {
            tail->next=Create(ch);
            tail=tail->next;
        }
    }
    return head;
}

int Max(struct Node *temp)
{
      int maxx=0;
      struct Node *trav=temp;
      while(trav)
      {
          if(trav->data>maxx)
          {
              maxx=trav->data;
          }
          trav=trav->next;
      }

      return maxx;
 }

 void Union(int hash[],struct Node *trav1,struct Node *trav2,int max)
 {
     int i;
     struct Node *head=NULL,*move=NULL;
    while(trav1!=NULL || trav2!=NULL)
    {
        if(trav1)
        {
            hash[trav1->data]++;
            trav1=trav1->next;
        }

        if(trav2)
        {
            hash[trav2->data]++;
            trav2=trav2->next;
        }
    }

   for(i=0;i<max+1;i++)
    {
        if(hash[i]>=1)
        {
            if(head==NULL)
            {
                head=move=Create(i);
            }
            else
            {
                move->next=Create(i);
                move=move->next;
            }
        }
    }

    move->next=NULL;
    struct Node *trav=head;
    printf("Union of linked list:");
     while(trav)
    {
        printf(" %d ",trav->data);
        trav=trav->next;
    }
 }

void Inter(int hash[],struct Node *trav1,struct Node *trav2,int max)
{

    int i;
    struct Node *head=NULL,*move=NULL;
    while(trav1)
    {
        if(hash[trav1->data]==0)
        {
            hash[trav1->data]++;
            
        }
        trav1=trav1->next;
    }

    while(trav2)
    {
        if(hash[trav2->data]==1)
        {
            hash[trav2->data]=-1;
            
        }
        trav2=trav2->next;
    }

    for(i=0;i<max+1;i++)
    {
        if(hash[i]==-1)
        {
            if(head==NULL)
            {
                head=move=Create(i);
            }
            else
            {
                move->next=Create(i);
                move=move->next;
            }
        }
    }
    move->next=NULL;
    struct Node *trav=head;
    printf("Intersection of linked list:");
     while(trav)
    {
        printf(" %d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}


void UnionInter(struct Node *head1,struct Node *head2)
{
    struct Node *trav1=head1;
    struct Node *trav2=head2;
     int max1 = Max(head1);
     int max2 = Max(head2);
     int max =(max1>max2)?max1:max2;

     int hash1[max+1],i;
     int hash2[max+1];
     for(i=0;i<max+1;i++)
     {
         hash1[i]=0;
         hash2[i]=0;
     }

     Union(hash1,trav1,trav2,max);
     trav1=head1;
     trav2=head2;
     Inter(hash2,trav1,trav2,max);
}





void display(struct Node *temp)
{
    struct Node *trav=temp;
    printf("Linked List:");
    while(trav)
    {
        printf(" %d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}

void main()
{
     int size1,size2;
     scanf("%d",&size1);
     scanf("%d",&size2);
     head1=Insert(size1);
     head2=Insert(size2);
     display(head1);
     display(head2);

     UnionInter(head1,head2);
    
 

   
}