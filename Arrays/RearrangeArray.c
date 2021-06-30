#include <stdio.h>

void Rearrange(int a[],int m);
void Rearrange(int a[],int m)
{
    int i=0,j=m-1,k=0;
    int b[10];
   
    while(i<=j)
    {
         b[k++]=a[j--];
         b[k++]=a[i++];
    }

    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
        
    
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int m=8;
    Rearrange(a,m);
}