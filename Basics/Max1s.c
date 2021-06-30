#include <stdio.h>

void Maxi(int a[][4],int m,int n)
{
    int hash[m+1],i,j,k=0,max=0;
    for(i=0;i<m+1;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           if(a[i][j]==1)
           {
               hash[i]++;
           }
       }
    }
  
     for(i=0;i<m+1;i++)
     {
         if(hash[i]>max)
         {
             max=hash[i];
             k=i;
         }
     }

     printf("Row %d contains %d 1's",k,max);
     
}



void main()
{
    int arr[][4]= {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};

    int m=4,n=4;

    Maxi(arr,m,n);
}