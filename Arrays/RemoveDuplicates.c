#include <stdio.h>

void Duplicates(int a[],int n)
{
    int j=0,i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j++]=a[i];
        }
    }
    a[j]=a[n-1];
    int x = j+1;
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}


void main()
{
    int a[]={1,2,2,3,7};
    int n = sizeof(a)/sizeof(a[0]);

    Duplicates(a,n);
}