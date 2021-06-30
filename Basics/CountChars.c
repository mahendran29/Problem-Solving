#include <stdio.h>
#include <string.h>


void sort012(int a[], int n)
{
    int low,med,high,temp;

    low=0,med=0,high=n-1;

    while(med<=high)
    {
        if(a[med]==0)
        {
          temp = a[low];
          a[low] = a[med];
          a[med] = temp;
            low++;
            med++;
            
        }
        else if(a[med]==1)
        {
            med++;
        }
        else         {
            temp = a[med];
            a[med] = a[high];
            a[high] = temp;
            high--;
        }
    }

}

int main()
{
    int arr[] = {2,1,2,1,0,0,2,0,1,2,0,2,1};
    int n = 13;
    sort012(arr,n);

    for(int i =0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
