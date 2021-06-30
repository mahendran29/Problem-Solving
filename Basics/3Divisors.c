#include <stdio.h>

int Three(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//never

int ThreeDivisors(int n)
{
    //int hash[n+1];
    int i,count=0;
    // for(i=0;i<n;i++)
    // {
    //     hash[i]=0;
    // }
     for(i=1;i<=n;i++)
    {
        if(Three(i))
           count++;
         // hash[i]++;
           
    }
    
    // for(i=0;i<n;i++)
    // {
    //     if(hash[i]==1)
    //     {
    //         count++;
    //     }
      
    // }
     
   return count;
}



void main()
{
    int q1[2]={6,10};

   
    for(int i=0;i<2;i++)
    {
        printf("%d\n",ThreeDivisors(q1[i]));
    }
}