#include<stdio.h>
#include <string.h>
int hash[256];

void NutsBolts(char a[],char b[],int n)
{
   int i,k=0;
   for(i=0;i<n;i++)
   {
       hash[a[i]]++;
       hash[b[i]]++;
   }

   for(i=0;i<256;i++)
   {
       if(hash[i]>0)
       {
           //printf("%d %c %d\n",i,i,hash[i]);

           a[k]=i;
           b[k]=i;
           k++;
       }
   }

   for(i=0;i<k;i++)
   {
       printf("%c ",a[i]);
   }
   printf("\n");
   for(i=0;i<k;i++)
   {
       printf("%c ",b[i]);
   }

       
}


void main()
{
   char  a[] = {'^','&', '%', '@', '#', '*', '$', '~', '!'};
   char b[] = {'~', '#', '@', '%', '&', '*', '$' ,'^', '!'};
   int n=strlen(a);
  // printf("%d",n);

   NutsBolts(a,b,n);

}