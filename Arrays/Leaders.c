#include <stdio.h>

void Leaders(int a[],int n)
{
    int i,sum=0,lead[10],j;
    for(i=0;i<n;i++)
    {
       sum+=a[i];
    }

    for(i=0,j=0;i<n;i++)
    {
        sum-=a[i];
        if(a[i]>=sum)
        {
            lead[j]=a[i];
          
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("THe leaders of the array are:%d\n",lead[i]);
    }
}

int main()
{
    int a[]={16,17,4,3,5,2};
    int n = sizeof(a)/sizeof(a[0]);
    Leaders(a,n);
}