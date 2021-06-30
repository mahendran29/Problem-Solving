#include <stdio.h>


int Equilibrium(int a[],int n)
{
    int i,sum=0,left=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
   
    for(i=0;i<n;i++)
    {
        sum-=a[i];
      
        if(sum==left)
        {
            printf("EQUAL:%d",i+1);
            return i;
        }
        left+=a[i];
    }

    return -1;
}


void main()
{
    int a[]={10,1,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);

    printf("%d",Equilibrium(a,n));
}