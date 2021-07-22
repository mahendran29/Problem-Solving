#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int longestPalin(char str[])
{
    int maxlength=1;
    int start=0,i;
    int len = strlen(str);
    int low=0,high=0;

    for(i=1;i<len;i++)
    {
        low =i-1;
        high=i;
        while(low>=0 && high<len && str[low]==str[high])
        {
            if(high-low+1 > maxlength)
            {
                start=low;
                maxlength=high-low+1;
            }
            low--;
            high++;
        }
  
        low=i-1;
        high=i+1;
         while(low>=0 && high<len && str[low]==str[high])
        {
            if(high-low+1 > maxlength)
            {
                start=low;
                maxlength=high-low+1;
            }
            low--;
            high++;
        }
    }

      for (int i = start; i <= start+maxlength-1; ++i)
        printf("%c", str[i]);
    
    return maxlength;
  
}



void main()
{
    char str[] = "rfkqyuqfjkxy";
    printf("Longest:%d",longestPalin(str));
}