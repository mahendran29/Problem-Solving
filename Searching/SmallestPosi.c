#include <stdio.h>

int Max(int a[],int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    return max;
}


int Smallest(int a[],int n)
{
    int i,sum=0;
    int max = Max(a,n);
    int total = max*(max+1)/2;

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
           sum+=a[i];
        }
    }

    if(total==sum)
    {
        return max+1;
    }

    return (total-sum);
}


void main()
{
    int a[]={1,2,3,4,5};
    int n=5;

    int miss = Smallest(a,n);
    printf("%d",miss);
}