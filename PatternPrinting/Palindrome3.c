#include <stdio.h>


/*
    1
   121
  12321
 1234321
123454321


*/

void main()
{
    int rows,columns,i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    int count=0;

    for(i=rows;i>0;i--)
    {
        for(j=1;j<=rows*2-1;j++)
        {
            if(j<=i-1)
            {
                printf(" ");
            }

            else if(j<=rows)
            {
                printf("%d",++count);
            }
          

            else if(count>=1)
            {
                --count;
                if(count!=0)
                 {
                    printf("%d",count);
                 }
            }
        }
        count=0;
        printf("\n");
    }
}