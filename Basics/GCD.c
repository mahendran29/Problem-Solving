#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)
    return a;

    return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}



void main()
{
    int  a=48,b=32;
    printf("The Greated common Divisor:%d",gcd(a,b));
    printf("The Greated common Divisor:%d",lcm(a,b));
}