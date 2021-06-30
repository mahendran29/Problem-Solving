#include <stdio.h>

/* 

******
*   *
*  *
* *
**
*

*/


void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);

   for(i=rows;i>0;i--)
   {
       for(j=1;j<=rows;j++)
       {
          if(i==rows|| j==1 || j==i)
          {
             printf("*");
          }
          else
          {
              printf(" ");
          }
       }

       printf("\n");
   }
}