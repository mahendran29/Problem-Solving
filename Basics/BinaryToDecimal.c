#include <stdio.h>
#include <string.h>

int BinaryToDecimal(char b[])
{
    int n = strlen(b);
    int n1=n;
    int lastDigit=0,DecimalVal=0;
    int base = 1;
    while(n1--)
    {
        lastDigit = b[--n]-'0';
        DecimalVal+=lastDigit*base;
        base = base*2;
    }

    return DecimalVal;
     
}


void main()
{
    char b[]="101100";
    printf("%d",BinaryToDecimal(b));
}