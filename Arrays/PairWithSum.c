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
            // printf("inside2");
         }
         else
         {
             j--;
            // printf("inside3");
         }
     }
    return count;
}


void main()
{
    int a[]={5 ,5 ,6 ,7 ,7 ,7 ,9 ,9 ,13 ,15 ,17 ,19 ,20 ,20,20};
    int n = 15;
    int k = 14;
   
    printf("%d",PairWithSum(a,n,k));
    printf("Done");
}

