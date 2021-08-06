#include <stdio.h>


void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i==0 || j==0 || i==rows-1 || j==columns-1)
               printf("* ");
            else 
               printf("  ");
        }
        printf("\n");
    }
}