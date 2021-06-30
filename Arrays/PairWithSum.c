#include <stdio.h>

int PairWithSum(int a[],int n,int k)
{
     int i=0;
     int j=n-1;
     int count=0;
     while(i<j)
     {
         if(a[i]+a[j]==k)
         {
             count++;
             i++;
             j--;
         }
         else if(a[i]+a[j]<k)
         {
             i++;
             printf("inside2");
         }
         else
         {
             j--;
             printf("inside3");
         }
     }
    return count;
}


void main()
{
    int a[]={1,2,3,4,5,6,7};
    int n = 7;
    int k = 8;
   
    printf("%d",PairWithSum(a,n,k));
    printf("Done");
}

