/*#include <stdio.h>

int Max(int a[],int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
   return max;
}


void Sort(int a[],int n)
{
    int max=Max(a,n);
    int hash[max+1];
    int i,j;
    for(i=0;i<max+1;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        hash[a[i]]++;
    }

    int tot=Max(hash,max+1);
    int total=tot;
    for(i=0;i<total;i++)
    {
        for(j=0;j<max+1;j++)
        {
             if(hash[j]==tot)
              {
                for(;hash[j]!=0;hash[j]--)
                {
                    printf("%d",j);
                }
              }

        }
        tot--;
    }

    

}


void main()
{
    int a[]={9,9,9,2,5};
    int n=5;

    Sort(a,n);
} */

#include <stdio.h>

int Max(int a[],int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
   return max;
}


void Sort(int a[],int n)
{
    int max=Max(a,n);
    int hash[max+1];
    int i,j;
    for(i=0;i<max+1;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        hash[a[i]]++;
    }

    int tot=Max(hash,max+1);
    int total=tot;
    for(i=0;i<total;i++)
    {
        for(j=0;j<max+1;j++)
        {
             if(hash[j]==tot)
              {
                for(;hash[j]!=0;hash[j]--)
                {
                    printf("%d",j);
                }
              }

        }
        tot--;
    }

    

}


void main()
{
    int t,n,A[60];
    scanf("%d ",&t);
    int i;
    while(t--)
    {
        scanf("%d  ",&n);
        for(i=0;i<n;i++)
       {
         scanf("%d",&A[i]); 
       }
       printf("\n");
       Sort(A,n);
    }
    

    

    
}