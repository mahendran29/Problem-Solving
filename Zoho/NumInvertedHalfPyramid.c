#include <stdio.h>

void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);

    for(i=rows;i>0;i--)
    {
        for(j=1;j<=i;j++)
           printf("%d",j);
        
        printf("\n");
    }
}