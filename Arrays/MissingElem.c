#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,7};
    int len=sizeof(a)/sizeof(a[0]);

    int n=a[len-1];
    int sum;
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
    }

    int total = (n*(n+1))/2;

    printf("The missing element is:%d",total-sum);

    
}