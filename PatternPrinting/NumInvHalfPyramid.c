#include <stdio.h>

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    for(i=rows;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
}