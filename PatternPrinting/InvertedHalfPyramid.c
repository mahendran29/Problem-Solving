#include <stdio.h>


void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);

    for(i=rows;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}