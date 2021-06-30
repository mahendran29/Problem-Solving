#include<stdio.h>
#include <string.h>

void Fraction(float a,float b)
{
    float res = a/b;
    printf("%f\n",res);

    int res = (int)a/b;

    char sm[]=res+'0';
    printf("%s",sm);
}



void main()
{
    float nume=1;
    float deno=3;

   
    
   Fraction(nume,deno);
}