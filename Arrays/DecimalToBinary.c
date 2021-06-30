#include <stdio.h>
#include <math.h>

int convert(int n)
{
    int rem;
    int bin;
    int i=1;

    while(n!=0)
    {
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i=i*10;
    }

    return bin;
}



int power(int base,int power)
{
    int sum=1;
    while(power!=0)
    {
        sum*=base;
        power--;
    }

    return sum;
}

int convert2(int n)
{
    int rem=0;
    int dec=0;
    int i=0;
    while(n!=0)
    {
        rem=n%10;
        dec+=rem*power(2,i);
        ++i;
        n=n/10;
    }

    return dec;
}



void main()
{
   int n1;
   printf("Enter a decimal number:");
   scanf("%d",&n1);
   printf("%d in decimal == %d in binary",n1,convert(n1));
   int n2;
   printf("Enter the binary value:");
   scanf("%d",&n2);
   printf("%d in binary == %d in decimal",n2,convert2(n2));


}