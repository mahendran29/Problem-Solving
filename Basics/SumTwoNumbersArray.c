#include <stdio.h>
#include <stdlib.h>

int sumTwoNumbers(int a[],int b[],int n1,int n2)
{
    int tot1=0,tot2=0,total=0,i=0,r=0;
    for(i=0;i<n1;i++)
    {
        r = a[i];
        tot1=tot1*10+r;  
    }
    r=0;
    for(i=0;i<n2;i++)
    {
        r = b[i];
        tot2=tot2*10+r;  
    }
    total=tot1+tot2;
    return total;
}

void main()
{
    int a[]={2,2,7,5,3,3};
    int b[]={4,3,3,8};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);

    printf("%d",sumTwoNumbers(a,b,n1,n2));
}