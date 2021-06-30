#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100],temp;
    int i,j,k,len;

    printf("Enter the string:");
    scanf("%[^\n]",&str);


    len = strlen(str);

    for(i=0,j=0;j<len;j++)
    {
        if(!isalnum(str[j]) || (j == len-1))
        {
            if(j<len-1)
            {
                k=j-1;
            }

            else
            {
                k=j;
            }
        


            while(i<k)
            {
                temp = str[i];
                str[i] = str[k];
                str[k] = temp;
                i++;
                k--;
            }

           i=j+1;
        

        }
    }

   char rev[100];
   strcpy(rev,str);
   for(i=len-1;i>=0;i--)
   {
       printf("%c",str[i]);
   }
}