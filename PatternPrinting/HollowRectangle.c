#include <stdio.h>


/*

* * * * *
*       *
* * * * *

*/

void main()
{
    int rows,columns,i,j;
    printf("Enter rows and columns:");
    scanf("%d %d",&rows,&columns);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            if(j==1 || j==columns || i==1 || i==rows )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");

    }
}
