#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[n];
int top=-1;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void Insert(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
   
    temp->next=head;
    head=temp;

}

void push(int data)
{
    if(top==n)
    {
      printf("Stack is full");
      return;
    }

    a[++top]=data;
}

int pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
        return 0;
    }
  
    int x = a[top--];
    return x;
}

int Palindrome()
{
    struct Node *trav=head;
    int flag=0;
    while(trav!=NULL)
    {
        push(trav->data);
        trav=trav->next;
    }

    trav=head;
    while(trav!=NULL)
    {
        int a=pop();
        if(a==(trav->data))
        {
            flag=1;
        }
        else
        {
            flag=0;
            return flag;
        }

        trav=trav->next;
        
    }

    return flag;

}

void PrintList()
{
    struct Node *trav=head;
    while(trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }

}

int main()
{
    int a[]={1,2,3,4};
    int count=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<count;i++)
    {
        Insert(a[i]);
    }

    PrintList();
  if(Palindrome())
   {
       printf("It is a palindrome");
   }
   else
   {
       printf("Not a palindrome");
   }
}