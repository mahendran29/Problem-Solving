#include <stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int a[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag = 1;
            }
        }

        if(flag==0)
        {
            break;
        }
    }
}

void PlatForm(int a[],int b[],int n)
{
     int i=1,j=0;
     int platform=1,result=1;
     Bubble(a,n);
     Bubble(b,n);

     while(i<n&&j<n)
     {
          if(a[i]<=b[j])
          {
             platform++;
             i++;
          }
          else if(a[i]>b[j])
          {
              platform--;
              j++;

          }
        if(platform>result)
        {
            result=platform;
        } 
     }

     printf("%d:  ",result);
}
int main()
{
     int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
     int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };

     int n=sizeof(arr)/sizeof(arr[0]);
     PlatForm(arr,dep,n);
}