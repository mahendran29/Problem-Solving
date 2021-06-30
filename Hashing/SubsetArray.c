#include <stdio.h>

int Max(int a[],int b[],int m,int n)
{
     int i,j;
     int max=0;
     for(i=0;i<m;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
     }

     for(j=0;j<n;j++)
     {
         if(b[j]>max)
         {
             max=b[j];
         }
     }

     
     return max;
}

void Subset(int a[],int b[],int m,int n)
{
    int x = Max(a,b,m,n);
    int hash[x+1];
    int i,count=0;
    for(i=0;i<x+1;i++)
    {
       hash[i]=0;
    }
  
    for(i=0;i<m;i++)
    {
         hash[a[i]]++;
    }

    for(i=0;i<n;i++)
    {
        if(hash[b[i]]>=1)
        {
            count++;
        }
    }

     count==n?printf("Subset"):printf("Not Subset");
}


void main()
{
    int a[]={1, 2, 3, 4, 5, 6};
    int b[]={1, 2, 7};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    Subset(a,b,m,n);
}