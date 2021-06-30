#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *right;
    struct Node *bottom;
};

struct Node * Create(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->bottom = temp->right = NULL;
    temp->data=key;

    return temp;

}

void Merge(struct Node *head1,struct Node *head2)
{
    int count=0,a[30],k=0;;
     struct Node *trav=head1;
     while(trav->bottom!=NULL)
     {
        // printf("Merge:%d",trav->data);
         trav=trav->bottom;
     }
     printf("%d",trav->data);
     head1->right=NULL;
     trav->bottom=head2;
    

     printf("\nAfter Merging\n\n");
     trav=head1;
     while(trav!=NULL)
     {
         a[k]=trav->data;
         printf(" %d",trav->data);
         trav=trav->bottom;
         count++;
         k++;
     }

     int i,j;
     for(i=0;i<count-1;i++)
     {
       for(j=0;j<count-1-i;j++)
       {
           if(a[j]>a[j+1])
           {
                 int temp;
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
           }
       }
     }

     printf("\n\nAfter Sorting:\n\n");
     for(i=0;i<count;i++)
     {
         printf("%d ",a[i]);
     }

}
int main()
{
    struct Node *head1,*head2,*head3,*head4,*temp,*shift;

    head1=Create(5);
    head2=Create(10);
    head3=Create(19);
    head4=Create(28);

    head1->right=head2;
    head2->right=head3;
    head3->right=head4;

    struct Node *trav=head1;
    while(trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->right;
    }

    printf("\n\n");
    temp=Create(7);
    head1->bottom=temp;
    shift=temp;

    temp=Create(8);
    shift->bottom=temp;
    shift=temp;

    temp=Create(30);
    shift->bottom=temp;
    shift=temp;
    
    trav=head1;
    while(trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->bottom;
    }




   printf("\n\n");


    temp=Create(20);
    head2->bottom=temp;
    shift=temp;

    temp=Create(25);
    shift->bottom=temp;
    shift=temp;

    
    
    trav=head2;
    while(trav!=NULL)
    {
        printf("%d ",trav->data);
        trav=trav->bottom;
    }

    Merge(head1,head2);


  /*  struct Node *Start,*Stay;
    if((head1->data)<(head2->data))
    {
         Start=Stay=head1;
    }

     if((head2->data)<(head1->data))
    {
         Start=Stay=head2;
    }

    while(head1!=NULL && head2!=NULL)
    {
         if((head1->data)<(head2->data))
         {
            Start->right=head1;
        }
        else{
           Start->right=head2;
        }
    }

    for(;head1!=NULL;head1=head1->right)
    {
        Start->right=head1;
    }

     for(;head2!=NULL;head2=head2->right)
    {
        Start->right=head2;
    }


     printf("\n\n\n\n\n\n");
     struct Node *stay1=Stay;
     while(stay1!=NULL)
     {
         printf("%d ",stay1->data);
         stay1=stay1->right;
     }
     */

}
