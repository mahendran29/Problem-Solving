#include <stdio.h>

void Swap(int a[],int n1,int n)
{
    int i,start=0,end=n1-1;
    while(start<end)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }

    printf("N:%d ",n1);
    start=n1;
    end=n-1;  

     while(start<end)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }

   

    

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[]={5,6,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int n1=3;
    Swap(a,n1,n);
}