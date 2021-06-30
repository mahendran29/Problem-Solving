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

void removeDuplicates()
{
  
      struct Node *move=head;
      struct Node *first=NULL;
      struct Node *fixed=NULL;
      
      while(move->next!=NULL)
      {
          if(move->data!=move->next->data)
          {
              if(fixed==NULL)
              {
                  first=fixed=move;
              }
              else
              {
                  first->next=move;
                 first=first->next;
              }
              
          }
          move=move->next;
          
      }

     if(first!=NULL)
     {
       
      first->next=move; 
    }
    else
    {
        fixed=first=move;
    }

    
    head=fixed;
    
}

void display()
{
    struct Node *trav=head;
    while(trav)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
}


void main()
{
    Insert(2);
    Insert(2);
    Insert(2);
    Insert(2);

    display();
    printf("\n");
    removeDuplicates();
    display();
}