#include <stdio.h>

void Trapping(int a[],int n)
{
    int i;
    int trapWater=0;
    for(i=1;i<n-1;i++)
    {
        if(a[0]>a[i])
        {
            trapWater+=(a[0]-a[i]);
        }
      
    }

    printf("%d",trapWater);
}

int main()
{
    int a[]={6,9,9};
    int n=sizeof(a)/sizeof(a[0]);
    Trapping(a,n);
}