#include <stdio.h>

void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);
    int start=0;
    int end = columns-1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(j<=start || j>=end)
              printf("*");
            else 
              printf(" ");
        }
        printf("\n");
        start++;
        end--;
    }
      start--;
      end++; 
      for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(j<=start || j>=end)
              printf("*");
            else 
              printf(" ");
        }
        printf("\n");
        start--;
        end++;
        
    }


   
    

}