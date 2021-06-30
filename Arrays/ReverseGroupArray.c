#include <stdio.h>

void Reverse(int a[],int k,int n)
{
    int i=0,start=0,end=0;
    for(i=0;i<n;i+=k)
    {
        start=i;

        end = ((k+i-1)<(n-1))?k+i-1:n-1;
     

        while(start<end)
        {
            int temp;
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--; 
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int k=5;
    Reverse(a,k,n);
}