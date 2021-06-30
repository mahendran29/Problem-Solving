//To sort two arrays with extra space

#include <stdio.h>

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}


void Merge(int a[],int b[],int m,int n)
{
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(a[i]>b[j])
            {
                swap(&a[i],&b[j]);
            }
        }
    }
}


int main()
{
    int m=4,n=5;
    int a[]={1,3,5,7};
    int b[]={0,2,6,8,9};

    Merge(a,b,m,n);

    printf("Array A:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    printf("Array B:");

    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}