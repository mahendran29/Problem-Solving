#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node* create(int data)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data=data;
    node->next=NULL;
    return node;
}

struct Node *top=NULL;

void push(int a)
{
    struct Node *temp = create(a);
   if(top==NULL)
      top=temp;
    else
    {
        temp->next=top;
        top=temp;
    }
}


int pop()
{
    if(top==NULL)
    {
        printf("Empty Stack!");
        return 0;
    }

    struct Node *extra = top;
    top=top->next;
    int a = extra->data;
    free(extra);
    return a;
}

int isEmpty()
{
    if(top==NULL)
      return 1;
    
    return 0;
}


int multiplier(int a)
{
    int i,b=0;
    for(i=9;i>1;i--)
    {
        while(a%i==0)
        {
           push(i);
           a/=i;
        }
    }

    if(a!=1)
       return -1;

    while(!isEmpty())
    {
        int s = pop();
        b=b*10+s;

    }

    return b;

    
}




void main()
{
    int a;
     scanf("%d",&a);

     int val = multiplier(a);
     printf("Lowest: %d",val);
}