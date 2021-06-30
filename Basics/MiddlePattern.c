#include <stdio.h>
#include <string.h>


void MiddlePattern(char s[],int n)
{
    int mid = n/2;
    int i,j,k;
   
    for(i=0;i<n;i++)
    {
        for(j=0,k=mid;j<=i;j++,k++)
        {
            if(k==n)
            {
                k=0;
            }

            printf("%c",s[k]);
        }

        printf("$\n");
    
    }
}


void main()
{
    char s[]="PROGRAM";
    int n = strlen(s);
   
    MiddlePattern(s,n);
}