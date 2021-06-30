#include <stdio.h>

void MaxMin(int a[],int n)
{
    int max=0;
    int min=a[0],i;
    for(i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           max=a[i];
       }
       else if(a[i]<min)
       {
           min = a[i];
       }
    }

    printf("The max element is: %d\nThe min element is: %d",max,min);
}


void main()
{
    int a[]={2,345,234,21,56789};
    int n =sizeof(a)/sizeof(a[0]);
    MaxMin(a,n);
}