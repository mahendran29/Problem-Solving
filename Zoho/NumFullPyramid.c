#include <stdio.h>

void main()
{
     int i,j,rows,columns;
     scanf("%d %d",&rows,&columns);
     int gap = columns/2;
     int mid = columns/2;
     printf("%d %d\n",gap,mid);
     int val=0;

     for(i=1;i<=rows;i++)
     {
         val=i;
         for(j=0;j<gap;j++)
           printf("  ");

         for(;j<=mid;j++)
           printf("%d ",val++);

         val--;

         for(j=1;j<i;j++)
            printf("%d ",--val);

         gap--;
         printf("\n");
     }
}