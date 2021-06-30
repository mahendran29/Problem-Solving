#include <stdio.h>
/*

    1
   1 2
  1   3
 1     4
1 2 3 4 5

*/
void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    int mid = columns/2+1;
    int inc=0;
    int val=1;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            if((i==rows&&j%2!=0)||i+j==6)
            {
                printf("%d",val);
                val++;
            } 
            else if(i!=1&&j==mid+inc)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        inc++;
        val=1;
        printf("\n");
    }
}