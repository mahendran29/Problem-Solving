#include <stdio.h>
#include <string.h>
#include <ctype.h>

void SpecialArray(char s[],int n)
{
    int i,j=n-1;
    for(i=0;i<j;)
    {
       if(!isalnum(s[i]))
       {
           i++;
       }
       if(!isalnum(s[j]))
       {
           j--;
       }
       
       if(isalnum(s[i])&&isalnum(s[j]))
       {
           char temp = s[i];
           s[i] = s[j];
           s[j] = temp;
           i++;
           j--;
       }

    }
}

int main()
{
    char sm[]="A&x#";
    int n = strlen(sm);
    SpecialArray(sm,n);

    printf("%s",sm);
}

