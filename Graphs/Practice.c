#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void createGraph(struct Node *a[],int vertices)
{
      int i,j,k,val=0;
      struct Node *temp=NULL;
      for(i=0;i<vertices;i++)
      {
          struct Node *last=NULL;
          printf("Enter the number of neighbours of %d:",i+1);
          scanf("%d",&k);
          for(j=0;j<k;j++)
          {
             printf("Enter value of %d of neighbours of %d",j+1,i+1);
             scanf("%d",&val);
             temp = (struct Node*)malloc(sizeof(struct Node*));
             temp->data=val;
             temp->next=NULL;
             if(a[i]==NULL)
                a[i]=temp;
              else 
                last->next=temp;
              
              last=temp;
          }
      }

    
}

void printGraph(struct Node *a[],int vertices)
{
    struct Node *temp=NULL;
    int i;
    for(i=0;i<vertices;i++)
    {
        temp = a[i];
        printf("The neighbours of %d are",i+1);
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}



void main()
{
    int vertices;
    printf("Enter the number of vertices:");
    scanf("%d",&vertices);

    printf("VERTICES:%d",vertices);


    struct Node *a[vertices];
    
    for(int i=0;i<vertices;i++)
    { 
       a[i]=NULL;  
    }

    createGraph(a,vertices);
    printGraph(a,vertices);
}
