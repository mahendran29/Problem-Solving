#include <stdio.h>
#include <string.h>


void Longest(char str[],int n)
{
    int i;
    int maxLength=1;
    int start=0;
    int low=0,high=0;

    for(i=1;i<n;i++)
    {
         high=i;
         low=i-1;
         while(low>=0 && high<n && str[low] == str[high])
         {
             if(high-low+1 > maxLength)
              {
                  start=low;
                  maxLength=high-low+1;
              }

              low--;
              high++;
         }
         high=i+1;
         low=i-1;
         while(low>=0 && high<n && str[low] == str[high])
         {
             if(high-low+1 > maxLength)
              {
                  start=low;
                  maxLength=high-low+1;
              }

              low--;
              high++;
         }
    }

    for(i=start;i<start+maxLength;i++)
      printf("%c",str[i]);
}



void main()
{
    char str[]= "Geeks";
    int n = strlen(str);
    Longest(str,n);
}