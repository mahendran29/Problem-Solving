#include <stdio.h>
#include <string.h>
int a[256];

void Run(char str[],int n)
{ 
    int i;
    for(i=0;i<n;i++)
    {
        a[str[i]]++;
    }
    
    for(i=0;i<256;i++)
    {
         if(a[i])
         {
             printf("%c%d",i,a[i]);
         }
    } 
}

int main()
{
    char str[]="wwwwaaadexxxxxx";
    int n = strlen(str);

    Run(str,n);
}