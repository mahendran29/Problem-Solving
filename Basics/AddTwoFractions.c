#include <stdio.h>

int GCD(int a,int b)
{
    if(b==0)
       return a;
    return GCD(b,a%b);
}




void addFraction(int num1, int den1, int num2,int den2)
{
         int gcd = GCD(den1,den2); 
         int denx = (den1*den2)/gcd;
         
         int numx = num1*(denx/den1)+num2*(denx/den2);
         
         int common = GCD(numx,denx);
          numx = numx/common;
          denx = denx/common;
         
        printf("%d/%d",numx,denx);
}



void main()
{
    int num1=384,den1=887,num2=778,den2=916;
    addFraction(num1,den1,num2,den2);
}