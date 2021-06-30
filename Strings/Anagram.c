#include <string.h>
#include <stdio.h>
#define NUM_CHARS 256

int Anagram(char *s,char *p)
{
    int char1[NUM_CHARS]={0};
    int char2[NUM_CHARS]={0};
    int i;
    for(i=0;s[i]&&p[i];i++)
    {
        char1[s[i]]++;
        char2[p[i]]++;
    }

   
    if(s[i] || p[i])
    {
        return 0;
    }

    for(i=0;i<256;i++)
    {
        if(char1[i]!=char2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char a[]="aaca";
    char b[]="aca";

    if(Anagram(a,b))
    {
        printf("It is a Anagram");
    }
    else
    {
        printf("It is not a Anagram");
    }
}