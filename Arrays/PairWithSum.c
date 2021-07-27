#include <stdio.h>

int PairWithSum(int arr[],int n,int sum)
{
      int start=0,end=n-1,count=0;
        while(start<end)
        {
            if(arr[start]+arr[end]==sum)
            {
                 count++;
                 start++;
                 end--;
            }
               
            
             if(arr[start]+arr[end]<sum)
               start++;
             
             else
               end--;
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

