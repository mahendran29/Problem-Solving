#include <stdio.h>
#include <string.h>


int myAtoi(char x[])
{
    int i=0,res=0;
    int sign=1;

    if(x[0]=='-')
    {
        sign=-1;
        i++;
    }
     
    for(;x[i];++i)
    {
        res=res*10+x[i]-'0';
    }

    return sign*res;
}



int main()
{
    char a[]="-2145";
    printf("%d",myAtoi(a));
}