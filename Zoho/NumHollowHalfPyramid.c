#include <stdio.h>


void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            if(j==1 || j==i || i==rows)
               printf("%d ",j);
            else 
               printf("  ");
        }
        printf("\n");
    }
}