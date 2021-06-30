#include <stdio.h>
#include <string.h>

void UpperCase(char a[],int n)
{
    a[0]=a[0]-32;
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i-1]==32)
        {
           a[i]=a[i]-32;
        }
    }

    for(i=0;i<n;i++)
    {
       printf("%c",a[i]);
    }
}


void main()
{
    char a[]="i love programming a lot";
    int n = strlen(a);
    UpperCase(a,n);
}