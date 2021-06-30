#include <stdio.h>
#include <limits.h>

void SecondLargest(int a[],int n)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }

        else if(a[i]>second&&a[i]!=first)
        {
            second=a[i];
        }
    }

    printf("The second largest element is:%d",second);
}


void main()
{
    int N=6;
    int arr[]={10,20,30,40,50,60};
    SecondLargest(arr,N);
}