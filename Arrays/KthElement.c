#include <stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int a[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag = 1;
            }
        }

        if(flag==0)
        {
            break;
        }
    }
}

 
int Element(int a[],int n,int k)
{
    Bubble(a,n);
    return a[k-1];
} 


int main()
{
    int a[]={4,3,7,19};
    int n = sizeof(a)/sizeof(a[0]);
    int k=3;
    int small = Element(a,n,k);
    printf("%d Smalles element is:%d",k,small);
}