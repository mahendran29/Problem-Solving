#include <stdio.h>

void Reversal(int arr[],int start,int end);

void Reversal(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void PrintArray(int a[],int n)
{
    printf("The elemenets in the array after reversal are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[1000],n;

    printf("Enter the size of the Array:");
    scanf("%d\n",&n);

    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elemenets in the array before reversal are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    Reversal(arr,0,n-1);

    PrintArray(arr,n);


}
