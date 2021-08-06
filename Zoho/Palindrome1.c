#include <stdio.h>

void main()
{
    int i,j,n;
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    {
        int val=1;       
        for(j=0;j<=i;j++)
          printf("%d",val++);
        val--;
        for(j=0;j<i;j++)
          printf("%d",--val);
        
        printf("\n");
    }
    
}