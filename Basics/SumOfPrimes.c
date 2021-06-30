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
    int sum=0;
     for(i=2;i<=n;i++)
    {
         if(isPrime(i))
         {
              sum+=i;
         }
    }
    printf("Sum of primes:%d",sum);
    
}



void main()
{
    int N;
    scanf("%d",&N);
    PrimeNumbers(N);
}