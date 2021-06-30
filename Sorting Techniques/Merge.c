#include <stdio.h>

void Merge(int a[],int lb,int mid,int ub)
{
    int i=0,j=0,k=0;
    i=lb;
    j=mid+1;
    k=lb;
    int b[100]={0};

    while(i<=mid&&j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
      
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }

   
}


void MergeSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
    int mid = (lb+ub)/2;
    MergeSort(a,lb,mid);
    MergeSort(a,mid+1,ub);
    Merge(a,lb,mid,ub);
    }
  
}




void main()
{
    int a[]={11,13,7,12,16,9,24,5,10,3};
    int n=10;
    MergeSort(a,0,n-1);
    int i;
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
}