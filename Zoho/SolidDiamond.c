#include <stdio.h>


void main()
{
    int i,j,rows;
    scanf("%d",&rows);
    
    for(i=0;i<rows/2;i++)
    {
       for(j=1;j<rows/2-i;j++)
         printf(" ");
       
       for(j=0;j<=i;j++)
         printf("* ");
       
       printf("\n");
    }

    for(i=0;i<rows/2;i++)
    {
        for(j=0;j<i;j++)
          printf(" ");
        for(j=0;j<rows/2-i;j++)
          printf("* ");
        
        printf("\n");
    }

}