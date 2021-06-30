#include <stdio.h>


int Inversion(int a[],int n)
{
   int i,j,count=0;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               count++;
           }
       }
   }

   return count;
}

int main()
{
    int a[]={1,20,6,4,5};
    int inv = Inversion(a,5);
    printf("Number of Inversions:%d",inv);
}