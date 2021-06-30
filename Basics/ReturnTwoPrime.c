#include <stdio.h>
#include <stdlib.h>


int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}


void ReturnTwo(int n)
{
    int i;
    int check[n+1];
    check[0]=check[1]=0;
    for(i=2;i<=n;i++)
    {
        check[i]=1;
    }

    for(i=n;i>=2;i--)
    {
        check[i]=isPrime(i);
    }

    for(i=0;i<n;i++)
    {
        if(check[i]&&check[n-i])
        {
            printf("%d %d",i,(n-i));
            return;
        }
    }


}


int main()
{
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("To find the combo of %d\n",n);
    ReturnTwo(n);
}