#include <stdio.h>


void main()
{
    int i,j,n;
    scanf("%d",&n);
    int gap=n;
    
    for(i=0;i<n;i++)
    {
        int val=1;
        for(j=1;j<gap;j++)
           printf(" ");
        
        for(;j<=n;j++)
          printf("%d",val++);
        val--;
        for(j=0;j<i;j++)
          printf("%d",--val);
        
        gap--;

        printf("\n");
        
    }

}