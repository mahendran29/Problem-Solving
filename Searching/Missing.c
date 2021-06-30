#include <stdio.h>

void Miss(int a[],int n)
{
    int i;
    int sum=0,max=0,val;
    for(i=0;i<n;i++)
    {
       sum+=a[i];
       if(a[i]>max)
       {
           max=a[i];
       }
    }

    val = max*(max+1)/2;


    printf("%d",(val-sum));

}


void main()
{
    int a[]={2, 5, 3, 1};
    int n = sizeof(a)/sizeof(a[0]);

    Miss(a,n);
}