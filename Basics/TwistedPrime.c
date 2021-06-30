#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Inside IF");
            return 0;
        }
    }
    return 1;
}

int Reverse(int n)
{
    int tot=0;
    int r;
    while(n!=0)
    {
        r = n%10;
        tot=tot*10+r;
        n=n/10;
    }
   
    return tot;
}



int isTwistedPrime(int n)
{
    if(isPrime(n) && isPrime(Reverse(n)))
    {
         return 1;
    }
    return 0;
}


void main()
{
    int N = 43;
    isTwistedPrime(N)?printf("Twisted Prime"):printf("Not Twisted Prime");
}