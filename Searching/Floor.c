#include <stdio.h>

void FloorSorted(int a[],int n,int x)
{
    int i;
    int index=-1,Elem=-1,count=0;

    if(x<a[0])
    {
        printf("%d",-1);
        return;
     }

    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            
            break;
        }
    }

    index = i;
    Elem = a[i];
 
    printf("%d %d",index,Elem);
}


void main()
{
    int a[]={1,2,8,10,11,12,19};
    int n = sizeof(a)/sizeof(a[0]);
    int x=5;
    FloorSorted(a,n,x);
}