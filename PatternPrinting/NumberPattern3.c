#include <stdio.h>

void main()
{
    int i,j,num=0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
          printf("%d ",++num);
        }
       printf("\n");
    }
}