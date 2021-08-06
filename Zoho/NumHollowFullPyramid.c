#include <stdio.h>

void main()
{
    int i,j,rows,columns;
    scanf("%d %d",&rows,&columns);

    int left,right,val=0,final=2;
    left=right=columns/2;
    for(i=0;i<rows;i++)
    {
        val=1;
        for(j=0;j<columns;j++)
        {
            if(j==left || j==right)
            {
               printf("%d",val);
                val=i+1;
            }
            else if((i==rows-1 && j%2==0))
            {
               printf("%d",final);
               final++;
            }
            else  
               printf(" ");
           
        }
        left--;
        right++;
        printf("\n");
    }
}