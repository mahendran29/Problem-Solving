#include <stdio.h>

int SubArray(int a[],int n,int k)
{
     int i,sum=a[0],start=0,max=0,longstart=0,longend=0;
     for(i=1;i<n;i++)
       {
           //printf("FOR:%d",a[0]);
          while(sum>k && start<i-1)
          {
            //  printf("BEFORE SUM:%d ",sum);
              sum-=a[start];
             // printf("AFTER SUM:%d",sum);
              start++;
             // printf("START:%d\n",start);
          }
          if(sum==k)
          {
                printf("Found:%d %d\n",start,i-1);
                if((i-start)>max)
                {
                   max=i-start;
                 //  printf("MAX:%d\n",max);
                   longstart=start;
                   longend=i-1;
              
                }
          }

          if(i<n){
            //  printf("BEFORE SUM1:%d",sum);
              sum+=a[i];
            //  printf("AFTER SUM1:%d\n",sum);
          }
        }
        return max;
}



void main()
{
    int a[]={-1,2,3,1,1,1,1,1,3};
    int n =sizeof(a)/sizeof(a[0]);
     int k=5;
    printf("\nLARGEST:%d",SubArray(a,n,k));

}
