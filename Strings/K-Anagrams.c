#include <stdio.h>
#include <string.h>
int HASH1[26];
int HASH2[26];

int Anagram(char a[],char b[],int k,int n)
{
     int i,count=0;
     for(i=0;a[i]&b[i];i++)
     {
        HASH1[a[i]-'a']++;
        HASH2[b[i]-'a']++;
     }

     if(a[i]|| b[i])
     {
         return 0;
     }

     for(i=0;i<26;i++)
     { 
         if(HASH1[i]!=0 && HASH2[i]!=0)
         {
             if(HASH1[i]==HASH2[i])
             {
                 count++;
             }

         }
     }
     if(count==n||(count+k)==n)
     {
         return 1;
     }
     else
     {
         return 0;
     }


}



void main()
{
    char a[]="fodr";
    char b[]="gork";
    int m = strlen(a);
    int n = strlen(b);
    int k=2;

    Anagram(a,b,k,n)?printf("Possible"):printf("Not Possible");
}