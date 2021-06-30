#include <stdio.h>
#include <string.h>

int IronMan(char s[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>=65&&s[i]<=90 || s[i]>=97&&s[i]<=122 )
        {
            s[j]=s[i];
            if(s[i]>=65&&s[i]<=90)
            {
                s[j]=s[i]+32;
            }
            j++;
        }
    }

   

    i=0;j=j-1;
    while(i<j)
    {
        if(s[i++]!=s[j--])
        {
            return 0;
        }
    }

    return 1;
}


void main()
{
    char s[]="I am :IronnorI Ma, i";
    int n = strlen(s);

    IronMan(s,n)?printf("Iron Man Saved"):printf("Iron Man Died");


}