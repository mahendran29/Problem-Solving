#include <stdio.h>

/*

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1



*/


void main()
{
    int rows,columns,i,j;
     printf("Enter the rows and columns:");
     scanf("%d %d",&rows,&columns);
     char inc=64;
     for(i=1;i<=rows;i++)
     {
         for(j=1;j<=2*i-1;j++)
         {
             if(j<=i)
             {
                 inc++;
                 printf("%c ",inc);
             }

             else if(j>i)
             {
                 inc--;
                 printf("%c ",inc);
             }

         }
          inc=64;
         printf("\n");
     }
}