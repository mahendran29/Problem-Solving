#include <stdio.h>
#include <string.h>

void RemainingString(char s[],char ch,int count,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        

        if(s[i]==ch)
        {
           count--;
           if(i==n-1)
           {
              printf("Empty String");
           }
           continue;
        }

        if(count==0)
        {
            printf("%c",s[i]);
        }

    }
}



void main()
{
    char s[]="Thisisdemostring";
    int n = strlen(s);
    char ch='i';
    int count =3;

    RemainingString(s,ch,count,n);
}