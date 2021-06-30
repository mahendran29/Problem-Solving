#include <stdio.h>
#include <string.h>
int HASH1[26];
int HASH2[26];

void Uncommon(char a[],char b[],int m,int n);

void Uncommon(char a[],char b[],int m,int n)
{
    int i;
    for(i=0;i<m;i++)
    {
      HASH1[a[i]-'a']++;
    }
    for(i=0;i<n;i++)
    {
        HASH2[b[i]-'a']++;
    }

    for(i=0;i<26;i++)
    {
        if(HASH1[i]!=0||HASH2[i]!=0)
        {
             if(!(HASH1[i]&&HASH2[i]))
          {
            printf("%c",i+'a');
          }
        }
       
    }

}


void main()
{
    char a[]="geeksforgeeks";
    char b[]="geeksquiz";
    int m = strlen(a);
    int n = strlen(b);

    Uncommon(a,b,m,n);
    
}