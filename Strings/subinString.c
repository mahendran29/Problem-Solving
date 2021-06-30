#include <stdio.h>
#include <string.h>

int main()
{
    char a[]="Hellpo";
    char b[]="el";

    int n = strlen(b);
    int i=0,j=0;
    for(i=0,j=0;a[i]&&b[j];i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }

    if(j==n)
    {
        printf("Substring is found at:%d",i-j);
    }
    else
    {
        printf("Substring is not found");
    }
}