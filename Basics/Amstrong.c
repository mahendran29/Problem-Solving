#include <stdio.h>
#include <math.h>


int Armstrong(int N)
{
    int r=0,sum=0,temp=N;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum+pow(r,3);
        temp=temp/10;
    }

    if(sum==N)
    return 1;
    else
    return 0;
}


void main()
{
    int N = 152;
    Armstrong(N)?printf("It is Amrstrong"):printf("It is not Armstrong");
}