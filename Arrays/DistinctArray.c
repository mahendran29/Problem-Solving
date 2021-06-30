#include <stdio.h>
int hash[10];

void Distinct(int nums[],int n)
{
    int i,temp=0,d=0,r=0;
    for(i=0;i<n;i++)
    {
       temp=nums[i];
       while(temp!=0)
        {
             d = temp%10;
             hash[d]++;
             temp=temp/10; 
        }
    }

    for(i=0;i<10;i++)
    {
        if(hash[i])
        {
            printf("%d",i);
        }
    }
}



void main()
{
    int nums[]={131, 11, 48};
    int n =sizeof(nums)/sizeof(nums[0]);
    Distinct(nums,n);
}