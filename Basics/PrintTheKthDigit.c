#include <stdio.h>

int Power(int base,int expo)
{
    int result=1;
    while(expo--)
    {
        result*=base;
    }
    return result;
}


int PrintKth(int a,int b,int k)
{
     int powerValue = Power(a,b);
     int value;
     while(k--)
     {
        value = powerValue %10;
        powerValue = powerValue/10;
     }

     return value;
}


void main()
{
    int A=5,B=3,K=3;
    printf("%d",PrintKth(A,B,K));
}