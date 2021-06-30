#include <stdio.h>
#include <stdlib.h>
int count;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL,*tail=NULL;
struct Node *end=NULL,*start=NULL;

void Insert(int key)
{
    struct Node *node =(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;

    if(head==NULL)
    {
        head=tail=node;
          count++;
        return;
    }

    tail->next=node;
    tail=node;
    tail->next=head;
    count++;
}

void split()
{
    end=head;
    count=(count%2==0)?(count/2):((count/2)+1);
    // printf("COUNT:%d",count);
    // if(count%2==0)
    // {
    //     count=count/2;
    // }
    // else
    // {
    //     printf("ELSE");
    //     count=(count/2)+1;
    // }
    //printf("C:%d\t",count);
    while(--count)
    {
        end=end->next;
    }
   start=end->next;
   end->next=head;
   tail->next=start;
}

void display(struct Node *temp,struct Node *head)
{
    struct Node *trav=temp;
    while(trav->next!=head)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
    printf("%d\n",trav->data);
}

void main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    // Insert(6);
    // Insert(7);
    // Insert(8);

    display(head,head);
    split();
    display(head,head);
    display(start,start);
}