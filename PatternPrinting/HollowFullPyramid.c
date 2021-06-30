#include <stdio.h>

void main()
{
    int rows,columns,i,j,k,var,inc=0,dec=0;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    var=columns-5;


    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            
            if((i==rows&&(j%2!=0))||j==var-inc||j==var+inc)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        inc++;
         printf("\n");
    }
}
