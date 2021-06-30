#include <stdio.h>


int Number(int a[],int n,int x)
{
    int count[10]={0};
    int i;
    for(i=0;i<n;i++)
    {
       count[a[i]]++;
    }

    return count[x];
}


int main()
{
    int a[]={1,1,2,2,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int x=1;

    int rep = Number(a,n,x);
    printf("Number of times %d repreated is %d",x,rep);
}