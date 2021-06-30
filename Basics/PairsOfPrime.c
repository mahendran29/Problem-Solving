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
    int i,j,flag=0;
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
      for(j=2;j<n;j++)
      {
          if(HASH[i]&&HASH[j])
          {
              if(i*j<=n)
              {
                  flag=1;
                  printf("Pairs are:(%d %d)\n",i,j);
              }
          }
      }

      
    }
    if(flag==0)
      {
          printf("No pairs");
      }
}



void main()
{
    int N;
    scanf("%d",&N);
    PrimeNumbers(N);
}