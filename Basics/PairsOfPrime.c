#include <stdio.h>


void Prime(int n)
{
    int i,j;
    int a[n+1];
    for(i=0;i<=n;i++)
      a[i]=1;

    a[0]=a[1]=0;
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==1)
        {
            for(j=i*i;j<=n;j+=i)
            {
                a[j]=0;
            }
        }
    }

    for(i=2;i<=n;i++)
    {
       for(j=2;j<=n;j++)
       {
           if(a[i]==1 && a[j]==1 && i*j<=n)
           {
               printf("%d %d",i,j);
           }
       }
    }
}



void main()
{
    int n=8;
    Prime(n);
}


