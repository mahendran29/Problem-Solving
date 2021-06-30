#include <stdio.h>

void CountSmaller(int n,int a[],int x)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            sum++;
        }
    }

    printf("%d",sum);

}

void main()
{
    int n=7;
    int a[]={1,2,2,2,7,9,5};
    int x=2;
    CountSmaller(n,a,x);
}