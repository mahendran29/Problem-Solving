#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;

void Insert(int key)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    if(head==NULL)
    {
        tail=node;
    }
    node->next=head;
    head=node;
}

void Sorted(int key)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node*));
    node->data=key;
    node->next=NULL;
    struct Node *trav=head;

    if((node->data)<(head->data))
    {
        node->next=head;
        head=node;
        return;
    }
    if((node->data)>(tail->data))
    {
        tail->next=node;
        tail=node;
        return;
    }

    while((node->data)>(trav->next->data))
    {
        trav=trav->next;
    }
    node->next=trav->next;
    trav->next=node;

}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }
    printf("NULL\n");
}

void main()
{
      Insert(80);
      Insert(69);
      Insert(58);
      Insert(47);
      Insert(36);
      Insert(25);
      display();
      Sorted(19);
      display();
      Sorted(8);
      display();
      Sorted(90);
      display();
      Sorted(40);
      display();

}