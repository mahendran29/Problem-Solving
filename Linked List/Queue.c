#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*rear=NULL;

void push(int key)
{
   
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->next=NULL;

    if(head==NULL)
    {
        head=rear=temp;
    }

    else
    {
       rear->next=temp;
       rear=temp;
    }
    
}

void pop()
{
    if(head==NULL)
    {
        printf("Queue is empty");
        return;
    }

     struct Node *temp;
     temp=head;
     head=head->next;
     free(temp);
}

void PrintList()
{
    struct Node *trav=head;
    if(trav==NULL)
    {
        printf("Queue is empty");
        return;
    }
    printf("PrintList:");
    while(trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
}

int main()
{                                                       
    int a[]={1,2,2,2,1,3};
    int n = sizeof(a)/sizeof(a[0]);             
    int i;
    for(i=0;i<n;i++)
    {                                                   
        if(a[i]==1)
        {
            i++;
            push(a[i]);
                       
        }
        else if(a[i]==2)
        {
            pop();

        }
    }

    PrintList();
}