#include <stdio.h>
#include <stdlib.h>

struct Node 
{
  int data;
  struct Node *next;
};

struct Node *head=NULL;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    temp->next=head;
    head=temp;
}

void Pop()
{
    if(head==NULL)
    {
        printf("Empty Stack");
    }
    else
    {
        struct Node *temp = head;
        head=head->next;
        free(temp);
    }
}
void Display()
{
   struct Node *trav=head;
   while(trav)
   {
       printf("%d",trav->data);
       trav=trav->next;
   }
   printf("\n\n");
}


int main()
{
     Insert(5);
     Insert(4);
     Insert(3);
     Insert(2);
     Insert(1);

     Display();
     Pop();

     Display();
     Insert(1);
      Display();
}