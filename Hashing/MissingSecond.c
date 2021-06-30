#include <stdio.h>


void Missing(int a[],int b[],int m,int n)
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
     int hash[max+1];
     for(i=0;i<max+1;i++)
    {
       hash[i]=0;
    }

    for(i=0;i<m;i++)
    {
        if(hash[a[i]]==0)
        {
            hash[a[i]]++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(hash[b[i]]==1)
        {
            hash[b[i]]++;
        }
    }

    for(i=0;i<max+1;i++)
    {
         if(hash[i]==1)
         {
             printf("%d ",i);
         }
    }
} 


void main()
{
    int a[] = {1,4,5,7,9};
    int b[] = {4,7,9};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    Missing(a,b,m,n);
}