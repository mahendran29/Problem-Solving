#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};
struct Node *head1=NULL,*head2=NULL;

struct Node * Create(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;
    return temp;
}

struct Node* Insert(struct Node *head,int key)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;

    temp->next=head;
    head=temp;

    return head;
}

void PrintList(struct Node *trav)
{
    while(trav!=NULL)
    {
        printf("%d",trav->data);
        trav=trav->next;
    }
    printf("\n\n\n");
}

struct Node* Add(struct Node *first,struct Node *second)
{
    struct Node* res=NULL;
    struct Node *temp,*prev=NULL;
    int carry=0,sum;

    while(first!=NULL || second !=NULL)
    {
        sum = carry + (first?first->data:0)+(second?second->data:0);

        carry = (sum>=10) ? 1:0;

        sum=sum%10;

        temp=Create(sum);

        if(res==NULL)
        {
            res=temp;
        }
        else
        {
            prev->next=temp;
        }

        prev=temp;

        if(first)
        {
            first=first->next;
        }

        if(second)
        {
            second=second->next;
        }

   }

   if(carry>0)
   {
       temp->next=Create(carry);
   }

   return res;

}

int main()
{   int i;
    int a[]={6,4,9,5,7};
    int n1 = sizeof(a)/sizeof(a[0]);
    int b[]={4,8};
    int n2 =sizeof(b)/sizeof(b[0]);
    for(i=0;i<n1;i++)
    {
        head1=Insert(head1,a[i]);
    }

     for(i=0;i<n2;i++)
    {
        head2=Insert(head2,b[i]);
    }
    PrintList(head1);
    PrintList(head2);

    struct Node *res = NULL;
    res= Add(head1,head2);
    printf("Resultant list:");
    PrintList(res);
}