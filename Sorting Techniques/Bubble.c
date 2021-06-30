#include <stdio.h>

void Bubble(int a[],int n)
{
    int i,j,temp=0;
    for(i=1;i<n;i++)            // Pass is always n-1 
    {
        for(j=0;j<n-1;j++)      //need not check the last element for swapping so j<n-1
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }


    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}



void main()
{
    int a[10];
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    Bubble(a,n);
    
}