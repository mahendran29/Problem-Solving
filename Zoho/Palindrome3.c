#include <stdio.h>


void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);

    int stars = columns/2;
    
    for(i=1;i<=rows;i++)
    {
        for(j=0;j<stars;j++)
          printf("*");
        
        for(j=0;j<i;j++)
          printf("%d*",i);
        
        for(j=0;j<stars-1;j++)
          printf("*");
        
        stars--;
        printf("\n");
    }
}