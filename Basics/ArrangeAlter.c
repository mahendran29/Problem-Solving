#include <stdio.h>
#include <string.h>

void Rearrange(int a[],int n)
{
    int diff = a[1]-a[0];
    int i;
    int min = a[0];
    int max = a[n-1];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=max;
            max-=diff;
        }
        else
        {
            a[i]=min;
            min+=diff;
        }

    }
}


void main()
{
    int a[]={10,20,30,40,50,60};
    int i;
    int n = sizeof(a)/sizeof(a[0]);
    printf("Before Rearraning:");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    Rearrange(a,n);
    printf("\nAfter Rearraning:");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
}