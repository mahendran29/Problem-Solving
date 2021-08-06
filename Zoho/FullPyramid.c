#include <stdio.h>

void main()
{
    int i,j,rows,columns;
   
    scanf("%d %d",&rows,&columns);
     int var = columns/2;

    for(i=0;i<rows;i++)
    {
        for(j=var;j>0;j--)
           printf(" ");
        
        for(j=0;j<=i;j++)
           printf("* ");
        var--;
        printf("\n");
    }
}