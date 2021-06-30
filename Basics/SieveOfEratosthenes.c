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


void PrimeNumbers(int n)
{
    int i;
    int HASH[n+1];
    HASH[0]=HASH[1]=0;
    for(i=2;i<n;i++)
    {
         HASH[i]=0;
    }

    for(i=2;i<n;i++)
    {
         if(isPrime(i))
         {
             HASH[i]++;
         }
    }

     for(i=2;i<n;i++)
    {
         if(HASH[i]==1)
         {
             printf("%d ",i);
         }
    }
}



void main()
{
    int N;
    scanf("%d",&N);
    PrimeNumbers(N);
}