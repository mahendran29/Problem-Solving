#include <stdio.h>


int ExtraElement(int a[],int b[],int n1)
{
    int i;
    for(i=0;i<n1;i++)
    {
        if(a[i]!=b[i])
        {
            return i;
        }
    }

    return 0;
}


void main()
{
    int  a[] = {3,5,7,9,11,13};
    int  b[] = {3,5,7,11,13};
    int n1 = sizeof(a)/sizeof(a[0]);
    int miss = ExtraElement(a,b,n1);
    printf("Index of the missing element is:%d",miss);
}