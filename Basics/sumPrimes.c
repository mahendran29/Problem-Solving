#include <stdio.h>
int a[10];

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

int Sum(int num)
{
    int n,r,sum=0,i;
    while(num)
    {
        r=num%10;
        if(isPrime(r))
        {
           a[r]++;
        }
        num=num/10;
    }

    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            sum = sum + (i*a[i]);
        }
    }

    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    int sum = Sum(num);
    if(sum)
    {
        printf("%d",sum);
    }
    else
    {
        printf("%d",0);
    }
}