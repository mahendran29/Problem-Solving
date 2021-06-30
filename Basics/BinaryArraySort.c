#include <stdio.h>


void Sort(int a[],int n)
{
     int count[2]={0};
     int i;
     for(i=0;i<n;i++)
     {
         count[a[i]]++;;
     }
 
    //  for(i=0;i<2;i++)
    //  {
    //      printf("%d ",count[i]);
    //  }
    
     for(i=0;i<2;i++)
     {
         for(;count[i]!=0;count[i]--)
         {
             printf("%d ",i);
         }
     }
}


void main()
{
    int a[]={1,0,1,1,1,1,1,0,0,0};
    int n = sizeof(a)/sizeof(a[0]);
    Sort(a,n);
}