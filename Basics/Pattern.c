#include <stdio.h>

void main()
{
    int n,count=0,i,j,k;
    scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
       for(j=n;j>0;j--)
       {
           for(k=0;k<n-i;k++)
           {
               printf("%d",j);
           }
       }
       printf("$");
   }
 
}