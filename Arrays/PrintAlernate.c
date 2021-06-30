#include <stdio.h>

void main()
{
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i=i+2)
    {
        printf("%d",a[i]);
    }

}