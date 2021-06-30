#include <stdio.h>
#include <stdlib.h>
struct Node
{ 
    int data;
    struct Node *next;

}*head;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    temp->next=head;
    head=temp;

}

void Delete(struct Node *del)
{
   struct Node *tel;

   while(del->next!=NULL)
   {
       del->data=del->next->data;
       tel=del;
       del=del->next;
   }
   tel->next=NULL;
   free(del);
}

void PrintList(struct Node *trav)
{
    while(trav!=NULL)
    {
        printf("%d:%d\n ",trav,trav->data);
        trav=trav->next;
    }
    printf("\n");

}

struct Node *head;
int main()
{
     Insert(2);
     Insert(1);
    // Insert(20);
    // Insert(10);

     PrintList(head);
     Delete(head);
     PrintList(head);
}