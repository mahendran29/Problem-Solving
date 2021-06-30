#include <stdio.h>
#include <string.h>
int HASH[26];
void Descending(char a[],int n)
{
      int i,j;
      for(i=0;i<n;i++)
      {
            HASH[a[i]-'a']++;
      }

     

      for(i=25;i>=0;i--)
      {
          for(j=0;j<HASH[i];j++)
          {
              printf("%c\n",i+'a');
          }
      }
}


void main()
{
    char a[]="gaeks";
    int n = strlen(a);

    Descending(a,n);
}