#include <stdio.h>


void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}