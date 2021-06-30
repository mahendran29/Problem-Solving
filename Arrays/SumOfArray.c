#include <stdio.h>

void main()
{
    int a[]={3,2,1,4};
    int i,sum=0;
    for(i=0;i<4;i++)
    {
        sum+=a[i];
    }
    printf("Sum of the array is%d",sum);
}