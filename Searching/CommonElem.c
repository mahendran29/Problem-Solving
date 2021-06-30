#include <stdio.h>

int Max(int a[],int m)
{
    int max=0,i;
    for(i=0;i<m;i++)
    {
        max=(a[i]>max)?a[i]:max;
    }

    return max;
}



void Common(int a[],int b[],int m,int n)
{
    int y = Max(a,m);
    int z = Max(b,n);
    int x = (y>z)?y:z;
                                  // a - 3,4,2,2,4
    int hash[x+1],i;              // b - 3,2,2,7
    for(i=0;i<x;i++)
    {
        hash[i]=0;                // 0 0 2 1 2 0 0 0
    }
    for(i=0;i<m;i++)
    {
        hash[a[i]]++;
    }

     for(i=0;i<n;i++)
    {
         if(hash[b[i]]>=1)
         {
             hash[b[i]]=-1;
         }
    }

    for(i=0;i<x;i++)
    {
        if(hash[i]==-1)
        {
            printf("%d",i);
        }
    }

    
}


void main()
{
    int a[]={3,4,2,2,4};
    int b[]={3,7};
    int m = 5;
    int n = 4;

    Common(a,b,m,n);
}