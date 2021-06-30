#include <stdio.h>

int Palindrome(int sum)
{
    int n=sum;
    int palin=0;
    while(n!=0)
    {
        palin=(palin*10)+(n%10);
        n=n/10; 
    }
    
    if(palin==sum)
    return 1;
    else
    return 0;
}


int Sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum = sum + (n%10);
        n=n/10;
    }
    printf("%d\n",sum);
    return Palindrome(sum);
}


void main()
{
    int n;
    scanf("%d",&n);
    int sum = Sum(n);
    printf("%d",sum);
}