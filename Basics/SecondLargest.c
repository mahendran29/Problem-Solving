#include <stdio.h>
#include <limits.h>

int SecondLargest(int a[],int n)
{
    int first,second,i;

    first=second=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }

    return second;
}




void main()
{
    int a[]={7, 8, 2, 1, 4, 3};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",SecondLargest(a,n));
}