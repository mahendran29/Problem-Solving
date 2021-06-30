#include <stdio.h>


void main()
{
    int rows,columns,i,j,k,var=0;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);

    for(i=rows;i>0;i--)
    {
        for(j=0;j<var;j++)
        {
           printf(" ");
        }
        for(k=i;k>0;k--)
        {
           printf("* ");
        }
        var++;
        printf("\n");
    }
}