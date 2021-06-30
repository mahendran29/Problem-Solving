#include <stdio.h>
#include <string.h>

int Palindrome(char a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
         if(a[i++]!=a[j--])
         {
             return 0;
         }
    }

    return 1;
}


void main()
{
    char a[]="abca";
    int n = strlen(a);

    Palindrome(a,n)?printf("Palindrome"):printf("Not Palindrome");

}