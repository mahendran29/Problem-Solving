#include <stdio.h>


// 1
// 121
// 12321
// 121
// 1


void main()
{
    int i,j,k;
    for(i=1;i<4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        for(k=i-1;k>0;k--)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }

    for(i=2;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i;k>1;k--)
        {
            printf("%d",k-1);
        }
        printf("\n");
    }
}