#include <stdio.h>

int Equil(int a[],int n)
{
    int sum = 0;
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

    }

    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        if(leftsum==sum)
        return i;

        leftsum+=a[i];
    }
   return -1;
}

int main()
{
    int a[]={20,17, 42, 25 ,32 ,32, 30, 32, 37, 9 ,2 ,33, 31, 17, 14, 40, 9 ,12 ,36 ,21 ,8 ,33 ,6 ,6 ,10 ,37 ,12 ,26 ,21 ,3};
    int n = 30;
    printf("%d",Equil(a,n));
}