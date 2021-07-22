#include <stdio.h>


int Max(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
          max=a[i];
    }

    return max;
}


int MaxKsum(int a[],int n,int k)
{
    int max = Max(a,n);
    int hash[max+1];
    int i,count=0;

    for(i=0;i<=max;i++)
      hash[i]=0;

    for(i=0;i<n;i++)
       hash[a[i]]++;

    for(i=0;i<=max;i++)
    {
        printf("%d  ",hash[i]);
    }

 
    printf("\n\n");
    printf("MAX:%d\n",max);
    for(i=0;i<n;i++)
    {

         if(k>a[i])
        {
             int rem = k-a[i];
             printf("%d %d ",a[i],rem);
            if(max>=rem && hash[rem]>=1 && i+1!=rem)
             {
                 if(a[i]==rem && hash[rem]==1)
                 {
                     continue;
                 }
                 else
                 {
                   hash[a[i]]=0;
                   printf("DONE\n");
                   count++;
                 }
             
             }
        }
        printf("\n");
    }

    return count;
}



void main()
{
    int  arr[] ={1, 2, 4, 3, 6}, K = 10;
    int n=5;
    printf("VAL:%d",MaxKsum(arr,n,K));
}