#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void display();

struct Node *Create(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node *));
    node->data = data;
    node->next = NULL;
}

struct Node* Reverse(struct Node *temp)
{
    struct Node *curr=temp;
    struct Node *next=NULL,*prev=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }

    return prev;
}

struct Node *head=NULL,*tail=NULL;


void Final(int data)
{
      struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
      node->data=data;
      node->next=NULL;

      if(head==NULL)
          head=tail=node;
      else
      {
          tail->next=node;
          tail=node;
      }
}

struct Node* Adding(struct Node *t1,struct Node *t2)
{
     struct Node *rl1 = Reverse(t1);
     struct Node *rl2 = Reverse(t2);
     struct Node *temp=NULL;
     int a,b,sum=0,carry=0;

     while(rl1 != NULL || rl2!= NULL)
     {
         a = rl1?rl1->data:0;
         b = rl2?rl2->data:0;
         sum=a+b+carry;

         carry = sum>=10 ? 1:0;
         sum = sum%10;

         Final(sum);

         if(rl1)
             rl1=rl1->next;
         if(rl2)
             rl2=rl2->next;
    }

    if(carry>0)
      Final(carry);
}



void display(struct Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

void main()
{
    struct Node *first=NULL, *second=NULL;
    first = Create(2);
    first->next = Create(9);
    first->next->next = Create(1);
    first->next->next->next = Create(2);
    first->next->next->next->next = Create(9);
    first->next->next->next->next->next = Create(9);
    first->next->next->next->next->next->next = Create(2);
    first->next->next->next->next->next->next->next = Create(8);
    first->next->next->next->next->next->next->next->next = Create(2);

    second = Create(2);
    second->next = Create(8);
    second->next->next = Create(9);

    display(first);
    display(second);

    Adding(first,second);
    printf("After Adding:");
    display(head);
}