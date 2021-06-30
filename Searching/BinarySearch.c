#include <stdio.h>

void Binary(int a[],int n,int k)
{
    int left=0,right=n-1;
    int mid,found=-1;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid]==k)
        {
            found=mid;
            break;
        }
        else if(a[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }

    printf("Element is found at:%d",found);
}

void main()
{
    int a[] = {1 ,2 ,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    Binary(a,n,8);
}