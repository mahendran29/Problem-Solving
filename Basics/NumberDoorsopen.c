#include <stdio.h>

void DoorOpen(int n)
{
    int HASH[n+1];
    int i,flag=1,x=0;
    for(i=0;i<n;i++)
    {
        HASH[i]=0;
    }

    for(i=0;i<n;i++)
    {
           x=i;
           while(x<n)
          {
            if(HASH[x]==0)
               HASH[x]=1;
            else 
               HASH[x]=0;
            x=x+i+1;
           }
        
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(HASH[i]==1)
        {
          printf("The doors opened are:%d",i+1);
        }
        
    }
}


void main()
{
    int N=5;
    DoorOpen(N);
}