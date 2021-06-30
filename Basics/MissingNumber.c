#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,9};
    int n = sizeof(a)/sizeof(a[0]);

    int x = a[n-1];

    int total = (x*(x+1))/2;

    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }

    int miss = total - sum;
    printf("Missing element:%d",miss); 
}