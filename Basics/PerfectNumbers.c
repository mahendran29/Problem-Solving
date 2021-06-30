#include <stdio.h>

int PerfectNumbers(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
    return 1;
    else
    return 0;
}


void main()
{
    int N=10;
    PerfectNumbers(N)?printf("It is a perfect number"):printf("It is not a perfect number");
}