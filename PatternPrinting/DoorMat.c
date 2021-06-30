#include <stdio.h>

void main()
{
    int i,j,k,l=1;

    for(i=3;i>0;i--)
    {
        for(j=3*i;j>0;j--)
        {
            printf("-");
        }

        for(k=0;k<l;k++)
        {
            printf(".|.");
        }
        l=l+2;

         for(j=3*i;j>0;j--)
        {
            printf("-");
        }
        printf("\n");
    }    

    for(i=0;i<1;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("-");
        }

        printf("WELCOME");

        for(j=0;j<7;j++)
        {
            printf("-");
        }

        printf("\n");

    }

     //printf("L:%d",l);
     for(i=1;i<4;i++)
     {
         for(j=i*3;j>0;j--)
         {
             printf("-");
         }

         l=l-2;
         for(k=l;k>0;k--)
         {
             printf(".|.");
         }

          for(j=i*3;j>0;j--)
         {
             printf("-");
         }

         printf("\n");
     }


}