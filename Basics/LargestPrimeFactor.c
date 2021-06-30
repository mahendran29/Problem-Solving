#include <stdio.h>
int prime(int n)
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
int LargestPrimeFactor(int n)
{
    int i,max=0,val=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            val=prime(i);

                if(val && i>max)
                {
                    max = i;
                    
                }
            
        }
    }

    return max;
}


void main()
{
    int n=24;
    printf("%d",LargestPrimeFactor(n));
}