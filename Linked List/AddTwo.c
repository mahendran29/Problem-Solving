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
struct Node* Reverse(struct Node* temp)
{
    struct Node *next=NULL;
    struct Node *prev=NULL;
    struct Node *curr=temp;
    while(curr)
    { 
         next=curr->next;
         curr->next=prev;
         
         prev=curr;
         curr=next;
    }

    return prev;

}
struct Node* Addition(struct Node *temp1,struct Node *temp2)
{

    struct Node *head1=Reverse(temp1);
    struct Node *head2=Reverse(temp2);
    struct Node *tot=NULL;
    struct Node *move=NULL;
    struct Node *ad=NULL;
    struct Node *tp1=head1;
    struct Node *tp2=head2;
    int sum=0,carry=0;

    while(tp1!=NULL||tp2!=NULL)
    {
       sum=(tp1?tp1->data:0)+(tp2?tp2->data:0)+carry;
       
       carry = (sum>=10)?1:0;
       sum=sum%10; 
       ad=Create(sum);

       if(tot==NULL)
       {
           tot=move=ad;
       }
       else
       {
           move->next=ad;
       }

       move=ad;
       if(tp1)
       {
           tp1=tp1->next;
       }
       if(tp2)
       {
         tp2=tp2->next;
       }

    }

    if(carry>0)
    {
        move->next=Create(carry);
    }
    return tot;
}

void display(struct Node *temp)
{
    struct Node *trav=temp;
    while(trav)
    {
        printf("%d",trav->data);
        trav=trav->next;
    }
    printf("\n");
}

void main()
{
     head1=Insert(2);
     head2=Insert(1);
     display(head1);
     display(head2);
     printf("\n\n");

    struct Node *final= Addition(head1,head2);
    final=Reverse(final);
    display(final);

}