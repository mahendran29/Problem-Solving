#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int Inter(struct Node *ptr1,struct Node *ptr2);

void PrintList(struct Node *trav)
{
    while (trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->next;
    }
    printf("\n\n");   
}

int Inter(struct Node *ptr1,struct Node *ptr2)
{
    int count1 = getCount(ptr1);
    int count2 = getCount(ptr2);
    int d;

    if(count1>count2)
    {
        d = count1-count2;
       return  Intersection(d,ptr1,ptr2);
    }
    else if(count2>count1)
    {
        d = count2-count1;
       return  Intersection(d,ptr2,ptr1);
    }
}

int Intersection(int x,struct Node *tp1,struct Node *tp2)
{
        int i;
        for(i=0;i<x;i++)
        {
            tp1=tp1->next;
        }

        while(tp1->next!=NULL && tp2->next!=NULL)
        {
            if(tp1->data==tp2->data)
            {
                return tp1->data;
            }
            tp1=tp1->next;
            tp2=tp2->next;
        }
        return 0;
}



int getCount(struct Node *val)
{
    int count=0;
    while(val!=NULL)
    {
        count++;
        val=val->next;
    }
    return count;
}

int main()
{
    struct Node *head,*head2;
    
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=6;
    head=temp;

    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=3;
    head->next=temp;

    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=9;
    head->next->next=temp;

    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=10;
    head2=temp;

    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=15;
    head->next->next->next=temp;
    head2->next=temp;

    temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=30;
    head2->next->next=temp;
    head2->next->next->next=NULL;

    PrintList(head);
    PrintList(head2);

   int mid =  Inter(head,head2);
   printf("intersected node:%d",mid);



    


}