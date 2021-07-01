#include <stdio.h>

/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/



void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);

    int k=columns;
    for(i=1;i<=rows;i++)
    {
        if(i<=rows/2+1)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        }

        else if(i>rows/2+1)
        {
           for(j=1;j<k;j++)
           {
               printf("* ");
           }
           k--;
           
        }
     
         printf("\n");
       
    }
}