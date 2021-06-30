#include <stdio.h>
#include <string.h>

int Palindrome(char a[])
{
    int i,n;
    n=strlen(a)-1;

    while(i<n)
    {
        if(a[i++]!=a[n--])
        {
            printf("It is not a palindrome");
            return 0;
        }
    }

    printf("It is a palindrome");
    return 1;
}


void main()
{
    char a[]="abc";
    Palindrome(a);
}