#include <stdio.h>


void main()
{
    int m=7;
    int bin[32]={0};
    int x=0;
    for(;m>0;x++)
    {
       bin[x]=m%2;
       m=m/2;
    
    }
    for(int i=31;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}