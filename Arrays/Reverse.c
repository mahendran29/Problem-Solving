#include <stdio.h>

void Reverse(int a[],int n)
{
    int start = 0;
    int end = n-1;
    int temp;
    while(start<end)
    {
        temp = a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}


void main()
{
    int a[]={4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    Reverse(a,n);
}