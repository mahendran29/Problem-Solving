#include <stdio.h>

void Leaders(int a[],int n)
{
    int max = a[n-1];
    int i;
    printf("%d ",max);

    for(i=n-2;i>=0;i--)
    {
        if(a[i]>max)
        {
            max=a[i];
            printf("%d ",max);
        }
    }
}


void main()
{
    int a[]={1,2,3,4,0};
    int n = sizeof(a)/sizeof(a[0]);

    Leaders(a,n);
}