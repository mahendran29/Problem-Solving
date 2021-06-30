#include <stdio.h>


/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

void main()
{
    int rows,columns,i,j,k,l;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    int val=0,inc=0;

    for(i=1;i<=rows;i++)
    {
        for(j=columns/2;j>=i;j--)
        {
            printf("  ");
        }

        for(k=i;k<=i+val;k++)
        {
             printf("%d ",k);
           
        }
        val++;
        for(l=val+inc-1;l>=i;l--)
        {
            printf("%d ",l);
        }
        inc++;
        printf("\n");
    }
}