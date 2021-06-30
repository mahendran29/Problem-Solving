#include <stdio.h>

void Linear(int a[],int n,int f)
{
    int found=-1,i;
    for(i=0;i<n;i++)
    {
          if(a[i]==f)
          {
              found=i;
          }
    }

    (found>=0)?printf("It is found at %d",found):printf("It is not found");
}


void main()
{
    int a[]={9, 7, 2, 16, 4};
    int n = sizeof(a)/sizeof(a[0]);

    Linear(a,n,9);
}