#include <stdio.h>

void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5-i;j>=1;j--)
        {
            printf("^");
        }
        for(k=i*2-1;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}