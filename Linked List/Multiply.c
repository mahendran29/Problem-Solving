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

int Multiply()
{
    struct Node *temp1=head1;
    struct Node *temp2=head2;
     int a=0,b=0;
    while(temp1)
    {
       a=(a*10)+temp1->data;
       temp1=temp1->next;
    }

     while(temp2)
    {
       b=(b*10)+temp2->data;
       temp2=temp2->next;
    }

    return a*b;

}



void display(struct Node *temp)
{
    struct Node *trav=temp;
    while(trav)
    {
        printf("%d ",trav->data);
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
    
     printf("%d",Multiply());

   
}