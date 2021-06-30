#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int WildCard(char str[],char patt[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m)
    {
        if(str[i]==patt[j])
        {
           i++;
           j++;
        }
        else if(j<n && patt[j]=='?')
        {
            i++;
            j++;
        }
        else if(j<n && patt[j]=='*')
        {
            while(str[i]!=patt[j+1])
            {
                i++;
            }
            j++;
        }
        else
        {
            return 0;
        }

    }

    if(j==n)
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
    char str[] = "algorithm";
    char patt[]= "a*it?m";
    int m = strlen(str);
    int n = strlen(patt);
    
   if(WildCard(str,patt,m,n))
   {
       printf("Matched!");
   }
   else
   {
       printf("Not Matched");
   }

}