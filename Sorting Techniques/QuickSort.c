#include <stdio.h>

int Partition(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
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
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;

}


void QuickSort(int a[],int lb,int ub)
{
    int val=0;
    if(lb<ub)
    {
        val = Partition(a,lb,ub);
        QuickSort(a,lb,val-1);
        QuickSort(a,val+1,ub);
    }
     
}


void main()
{
     int i;
     int a[]={8,11,11,12,15,5,10,7,11,15,1,4,13,16,17,4,9,10,11,12,1,3,4,12,13};
     int n=24;

     QuickSort(a,0,n);

    for(i=0;i<24;i++)
    {
        printf(" %d",a[i]);
    }

}