#include <stdio.h>


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


void main()
{
    int bin=0001;
    int dec=0,i=0;
    int rem=0;


    

    while(bin!=0)
    {
       rem=bin%10;
       bin/=10;
       dec = dec +(rem*power(2,i));
       i++;
    }

    printf("%d",dec);
}