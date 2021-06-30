#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void Insert(int data)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=data;
    node->next=head;
    head=node;
}
struct Node* Reverse(struct Node *trav)
{
    struct Node *prev=NULL;
    struct Node *next=NULL;
    struct Node *curr=trav;

    while(curr)
    {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
    } 

    return prev;
}

void AddByOne()
{
    struct Node *trav=head;
    int sum=trav->data,carry=1;
    trav=trav->next;
    while(trav)
    {
       sum=(sum*10)+trav->data;
       trav=trav->next;
    }

    sum+=carry;
    trav=head;
    int val=0;
    while(trav)
    {
        val=sum%10;
        trav->data=val;
        sum=sum/10;
        trav=trav->next;
    }
    trav=head;
    head=Reverse(trav);
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d",trav->data);
        trav=trav->next;
    }
    printf("\n");
}
void main()
{
    Insert(3);
    Insert(2);
    Insert(1);

    display();
    AddByOne();
    display();

}