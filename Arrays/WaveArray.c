#include <stdio.h>

void WaveArray(int a[],int n)
{
    int i,temp=0;
    for(i=0;i<n-1;i+=2)
    {
        int temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);

    WaveArray(a,n);
}