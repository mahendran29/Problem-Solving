#include <stdio.h>


void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==1)
            {
                printf("%d ",j);
            }
            else if(j==1)
            {
                printf("%d ",i);
            }

            else if(i+j==6)
            {
                printf("%d ",rows);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}