#include <stdio.h>

void Facing(int a[],int n)
{
    int count=1,i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
    }

    printf("%d",count);
}



void main()
{
    int a[]={2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);

    Facing(a,n);
}