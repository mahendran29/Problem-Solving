#include <stdio.h>

int Partition(int a[],int l,int u)
{
    int pivot=a[l];
    int start=l;
    int end=u;
  

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }

        while(a[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
              int temp=0;
           temp=a[start];
           a[start]=a[end];
           a[end]=temp;
        }
    }
  int temp=0;
    temp=a[l];
    a[l]=a[end];
    a[end]=temp;
    return end;
}


void QuickSort(int a[],int l,int u)
{
    int val=0;
    if(l<u)
    {
    val = Partition(a,l,u);
    QuickSort(a,l,val-1);
    QuickSort(a,val+1,u);
    }
   
}


void main()
{
    int num[]={3,2,3,1,2,4,15,5,5};
    int n = 9;
    int k=9;
    int l=4;

    QuickSort(num,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }                                                            
    printf("\n%dth largest number is %d",l,num[n-l]);       
    printf("\n%dth smallest number is %d",k,num[k-1]);
}