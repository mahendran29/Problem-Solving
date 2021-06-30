// Given an array and the sum. Find the indices which equals the sum.
#include <stdio.h>

int SubArray(int a[],int n,int sum)
{
    int current_sum = a[0],start=0,i;

    for(i=1;i<=n;i++)
    {
        while(current_sum>sum && start<i-1)
        {
            current_sum = current_sum-a[start];
            start++;
        }

        if(current_sum==sum)
        {
            printf("Sum found between indices:%d %d\n",start,i-1);
            return 1;
        }

        if(i<n)
        {
            current_sum=current_sum+a[i];
        }
    }
    printf("No subarray found");
    return 0;
}


int main()
{
    int a[]={15,2,4,8,9,5,10,23};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=1;
    SubArray(a,n,sum);

}
