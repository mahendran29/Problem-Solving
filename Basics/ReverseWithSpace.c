#include <stdio.h>
#include <string.h>

void Reverse(char a[],int n)
{
    int i,j;
    char temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==' ')
        {
            i++;
        }
        if(a[j]==' ')
        {
            j--;
        }

        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

void main()
{
    char a[]="geeksforgeeks";
    int n =strlen(a);
    Reverse(a,n);
    printf("%s",a);
}