#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void Insert(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=value; 
    
    temp->next=head;
    head=temp;
}

int Middle(int count)
{
    struct Node *temp=head;
    int i;
    for(i=0;i<(count/2);i++)
    {
        temp=temp->next;
    }

    return temp->data;
}

int Count()
{
    int count=0;
    struct Node *temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }

    return count;
}

int main()
{
     Insert(1);
     Insert(5);
     Insert(7);
     Insert(6);
     Insert(4);
     Insert(2);

     int count = Count();
     printf("Count is %d\n",count);

     int mid=Middle(count);
     printf("Middle is:%d",mid);
}