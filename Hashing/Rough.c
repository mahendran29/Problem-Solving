#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;
int max = 0;
int count = 0;
 
void calculate()
{
    struct  Node *temp = head;
    while(temp)
    {
        if(temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }   
    printf("%d ",max);
}

void push(int key, int k)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = key;
    node->next = NULL;

    if(head == NULL)
    {
        head = tail = node;        // 1 2 3 1 4 5 2 3 6
        max = node->data;
        count++;                  // h     t
    }                              //3->2->1
    else
    {
        node->next = head;
        head = node;
        count++;
    }

    if(count >= k)
    {
        calculate();
        tail = tail->next;
        max = tail->data;
    }
}

void subarray(int a[], int n, int k)
{
   int i;
   for(i=0;i<n;i++)
   {  
      push(a[i],k);
   }
}

int main()
{
    int a[] = {1,2,3,1,4,5,2,3,6};
    int n=9;
    int k=3;
   subarray(a,n,k);
}