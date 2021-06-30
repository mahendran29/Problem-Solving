#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    
    return -1;

}

int change(char s[],int n)
{
    int i,res=0;
    int temp1=0,temp2=0;
    for(i=0;i<n;i++)
    {
        temp1 = value(s[i]);

        if((i+1)<n)
        {
            temp2=value(s[i+1]);

            if(temp1>=temp2)
            {
                res=res+temp1;
            }
            else
            {
                res=res+temp2-temp1;
                i++;
            }
        }
        else
        {
            res=res+temp1;
        }
    }

    return res;
}


void main()
{
    char s[]="III";
    int n = strlen(s);
    printf("%d",change(s,n));
}