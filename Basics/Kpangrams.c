#include <stdio.h>
#include <string.h>

int Pangram(char s[],int n)
{
    int HASH[26]={0};
    int i;
    int index=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            index = s[i]-'A';
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            index = s[i]-'a';
        }
        else
        {
            continue;
        }
       
        HASH[index]=1;
    }

    for(i=0;i<26;i++)
    {
        if(HASH[i]==0)
        {
            return 0;
        }
    }
    return 1;
    
}




void main()
{
    char s[]="the quick brown fox jumps over the lazy dog";
     int n = strlen(s);
    Pangram(s,n)?printf("Pangrams"):printf("Not Pangrams");
}