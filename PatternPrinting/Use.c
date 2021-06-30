#include <stdio.h>

void main()
{
    int i,j,k,red=3,l=1;

    int rows=11,col=33;
    for(i=rows/2;i>0;i--)
    {
         for(j=((col-red)/2);j>0;j--)
         {
            printf("-");
         }
        
         for(k=0;k<l;k++)
         {
             printf(".|.");
         }
          l+=2;

          for(j=((col-red)/2);j>0;j--)
         {
            printf("-");
         }
         red+=6;;
         printf("\n");
    }

    for(i=0;i<1;i++)
    {
        for(j=((col-7)/2);j>0;j--)
        {
            printf("-");
        }

        printf("WELCOME");

        for(j=((col-7)/2);j>0;j--)
        {
            printf("-");
        }
        printf("\n");
     }

    

    for(i=rows/2;i>0;i--)
    {
        red-=6;
        l-=2;
         for(j=((col-red)/2);j>0;j--)
         {
            printf("-");
         }
        
         for(k=0;k<l;k++)
         {
             printf(".|.");
         }

          for(j=((col-red)/2);j>0;j--)
         {
            printf("-");
         }
         printf("\n");
    }
  

     
}