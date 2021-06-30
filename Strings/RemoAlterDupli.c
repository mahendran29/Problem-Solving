#include <stdio.h>
#include <string.h>

void RemoveDuplicate(char s[40]);

void RemoveDuplicate(char s[40])
{
    char prev='\0';
    int k=0;
    int n = strlen(s);
    int i;


    for(i=0;i<n;i++)
    {
        if(s[i]!=prev)
        {
            s[k++]=s[i];
        }

        prev=s[i];
    }

    s[k]='\0';
}


int main()
{
    char a[40]="ABBBCCCDDD";

    RemoveDuplicate(a);

    printf("%s",a);
}