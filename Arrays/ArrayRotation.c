#include <stdio.h>

void  reverseArray(int[],int ,int);


void leftRotate(int arr[],int d,int n)
{
    if(d==0)
    {
        return;
    }

    d=d%n;

    // reverseArray(arr,n-d,n-1);
    // reverseArray(arr,0,n-d-1);   // This is code for Right Rotation
    // reverseArray(arr,0,n-1);

    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);   // This is code for Left Rotation
    reverseArray(arr,0,n-1);
}

void reverseArray(int a[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
     }
}


void main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
   


    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   printf("\n");
     leftRotate(arr,d,n);
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
