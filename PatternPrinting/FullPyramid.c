#include <stdio.h>

void main()
{
    int rows,columns,i,j,k;
    printf("Enter the rows and columns:");
    scanf("%d %d",&rows,&columns);
    int var=columns-5;
    printf("VAR:%d\n",var);
    for(i=1;i<=rows;i++)
    {
        for(j=var;j>1;j--)
        {
           printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        var--;
        printf("\n");
    }
}