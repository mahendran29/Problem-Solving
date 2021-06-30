#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node *next;
};
struct Node *head1=NULL,*head2=NULL;

int GetIntersectionNode(int x,struct Node *head1,struct Node *head2);
int GetIntersection();
int getCount(struct Node *trav);




int GetIntersection()
{
    int count1 = getCount(head1);
    int count2 = getCount(head2);
    int d;
    printf("\nCount1:%d",count1);
    printf("\nCount2:%d",count2);

    if(count1>count2)
    {
       d = count1-count2;
       return GetIntersectionNode(d,head1,head2);
    }
    else if(count1<count2)
    {
        d=count2-count1;
        return GetIntersectionNode(d,head2,head1);
    }

}

int GetIntersectionNode(int x,struct Node *head1,struct Node *head2)
{
    int i;
    struct Node *current1=head1;
    struct Node *current2=head2;

    printf("\n\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",current1->data);
        current1=current1->next;
    }

    printf("\n\n");

    while(current1!=NULL && current2!=NULL)
    {
        if(current1==current2)
        {
            return current1->data;
        }
        current1=current1->next;
        current2=current2->next;
    }

    return -1;

}

int getCount(struct Node *trav)
{
     int count=0;
     while(trav!=NULL)
     {
        count++;
        trav=trav->next;
     }

     return count;
}
void PrintList()
{
    struct Node *trav;
    trav=head1;

    printf("Linked List1:");
    while(trav!=NULL)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }
    printf("NULL");

    printf("\nLinked List2:");
    trav=head2;

    while(trav!=NULL)
    {
        printf("%d->",trav->data);
        trav=trav->next;
    }
    printf("NULL");

    

}

int main()
{
  

    struct Node* newNode;
    head1 = (struct Node*)malloc(sizeof(struct Node));
    head1->data = 10;

    head2 = (struct Node*)malloc(sizeof(struct Node));
    head2->data = 3;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 6;
    head2->next = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 9;
    head2->next->next = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 12;
    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 30;
    head1->next->next = newNode;

    head1->next->next->next = NULL;
  
   PrintList();

   int inter = GetIntersection();
   printf("\nIntersection Point:%d",inter);
}

