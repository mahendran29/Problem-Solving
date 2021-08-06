#include <stdio.h>


void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);
    int left,right;
    left=right=columns/2;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
             if(j==left||j==right||(i==rows-1 && j%2==0))
               printf("*");
             else 
               printf(" ");
        }
        left--;
        right++;
        printf("\n");
    }
}