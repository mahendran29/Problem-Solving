#include <stdio.h>

void ProductArrayPuzzle(int a[],int n)
{
    int i;
    int b[n],sum=1;
    for(i=0;i<n;i++)
    {
        b[i]=0;
        if(a[i]==0)
        {
            continue;
        }
        sum*=a[i];
    }
    printf("SUM:%d\n",sum);
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[i]=sum;
            continue;
        }
        else
        {
             b[i]=sum/a[i];
             if(b[i]==1)
             {
                 b[i]=0;
             }
         
        }
      
        
    }

    for(i=0;i<n;i++)
    {
        printf("%d %d\n",i,b[i]);
    }

}


void main()
{
    int a[]={10,3,5,6,2};
    int n = sizeof(a)/sizeof(a[0]);

    ProductArrayPuzzle(a,n);
}