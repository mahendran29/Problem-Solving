#include <stdio.h>
#include <stdlib.h>


void Remove(int a[],int n)
{
    int j=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j++]=a[i];
        }
    } 

    for(i=0;i<j;i++)
    {
        printf("%d",a[i]);
    }
}


int main()
{
    int a[]={1,2,2,3,3,4},i,n;
    n=sizeof(a)/sizeof(a[0]);
    
    Remove(a,n);
}