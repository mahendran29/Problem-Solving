#include<stdio.h>
#include<stdlib.h>

void subarrar(int a[], int n, int k)
{
   int i;
   int start=0,end=0;
   int max=0;
   for(i=0;i<(n-k+1);i++)
   {
  
       start = i;
        end = (i+k-1)<(n-1)?(i+k-1):(n-1);
        max=0;
        while(start<=end)
        {
          
            if(a[start]>max)
            {
                max=a[start];
              
            }
              start++;
        }
    
        printf("%d ",max);
   }

}

int main()   //s   e     
{            //0 1 2 3 4 5 6 7 8 
    int a[] = {8,5,10,7,9,4,15,12,90,13};
    int n=10;
    int k=4;
    subarrar(a,n,k);
     

}
