#include <stdio.h>

void main()
{
    int i,j;
    for(i=6;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
     printf("\n");

    for(i=0;i<6;i++)
    {
        for(j=6;j>i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}