#include <stdio.h>
#include <string.h>

int Extract(char a[],int n)
{
    int i;
    int sum=0,rem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        { 
            sum = sum *10+ (a[i]-'0');
 
        }
        else
        {
           
            if(sum>rem)
            {
                rem=sum;
                sum=0;
            }
        }
    }

    return rem;
}



void main()
{
    //char s[]="100klh564abc365bg";
    char s[]="abcdef";
    int n = strlen(s);
     int ans = Extract(s,n);
    if(ans>0)
    {
         printf("%d",ans);
    }
    else
    {
        printf("%d",-1);
    }
}