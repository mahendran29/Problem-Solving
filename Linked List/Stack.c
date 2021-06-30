#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void push(int key)
{
   struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
   temp->data=key;

   temp->next=head;
   head=temp;
}

int pop()
{
    if(head==NULL)
    {
        printf("Empty Stack");
        return 0;
    }

    struct Node *temp;
    temp=head;
    head=head->next;
    int val=temp->data;
    free(temp);
    return val;

}

void PrintList()
{
    struct Node *trav = head;
    while(trav!=NULL)
    {
        printf(" %d  ",trav->data);
        trav=trav->next;
    }

}



int main()
{
    int x;
    push(2);
    push(3);
    x = pop();
   // printf("Popped element is:%d ",x);
    push(4);
    x = pop();
   // printf("Popped element is:%d",x);

   PrintList();
}