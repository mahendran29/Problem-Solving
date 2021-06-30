#include <stdio.h>
#include <string.h>

char* Prefix(char a[10],int b[10],int n)
{
    char *x;
    int i,j;
    for(i=0,j=0;i<n&&j<n;i++)
    {
        if(a[i]!=b[j])
        {
            break;
        }

       x[i]=a[i];
    }

    return x;
}



char* CheckPrefix(char a[10],int n)
{
    printf("Inside");
    char *b=a[0];
    printf("char:%s",b);
    for(int i=1;i<n;i++)
    {
       b[0]=Prefix(b,a[i],n);
       printf("%s",b[0]);
    }

    return (b[0]);
}


int main()
{
    printf("Hello");
    char a[10]={"Geeksforgeeks","geeks","geezer","geems"};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Hello");
    //CheckPrefix(a,n);
}