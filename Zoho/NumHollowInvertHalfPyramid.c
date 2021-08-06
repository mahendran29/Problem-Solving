#include <stdio.h>

void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);
    
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=columns-i;j++)
        {
            if(i==0)
               printf("%d",j);
            else if(j==1)
              printf("%d",i+1);
            else if(j==columns-i)
               printf("%d",rows);
            else 
              printf(" ");
        }
        printf("\n");
    }
}