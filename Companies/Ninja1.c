#include <stdio.h>

void main()
{
    int a[]={2,7,1,6,3,4};
    int n =6;
    int i,max=0;

    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
          max=a[i];
    }

    int real = n*(n+1)/2;
    int subs=0;

    for(i=0;i<n;i++)
         subs+=a[i];

    printf("Missing element is: %d",real-(subs-max));

    



}