#include <stdio.h>

int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}



void main()
{
    int N;
    scanf("%d",&N);
    isPrime(N)?printf("It is a prime number"):printf("It is not a prime number");
}