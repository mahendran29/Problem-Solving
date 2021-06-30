#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)
    {
      return a;
    }

    return gcd(b,a%b);
}


int GCDofArray(int arr[],int N)
{
    int i;
    int result = arr[0];
    for(i=1;i<N;i++)
    {
        result = gcd(result,arr[1]);
    }

    if(result==1)
    {
        return 1;
    }

    return result;
}


void main()
{
    int arr[]={2,4,6};
    int N=3;

    printf("%d",GCDofArray(arr,N));
}