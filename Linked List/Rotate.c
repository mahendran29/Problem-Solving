#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head=NULL,*tail=NULL;

void Insert(char key)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;
    node->prev=NULL;
    if(head==NULL)
    {
        head=tail=node;
        return;
    }

    tail->next=node;
    node->prev=tail;
    tail=tail->next;
}

void rotate(int n)
{
    int count=n;
    struct Node *end=head;
    struct Node *end2=NULL;

    while(--count)
    {
        end=end->next;
    }

    end2=end;
    while(end2->next!=NULL)
    {
        end2=end2->next;
    }

    end2->next=head;
    head->prev=end2;
    head=end->next;
    end->next->prev=NULL;
    end->next=NULL;
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%c ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}

void main()
{
    Insert('d');
    Insert('e');
    Insert('a');
    Insert('b');
   // Insert('c');

    display();
    rotate(2);
     display();

}