#include <stdio.h>
#define NUM_CHARS 256
char *RemoveDupls(char *s)
{
    int bin_hash[NUM_CHARS]={0};
    int i=0,j=0;
    char temp;

    while(*(s+i))
    {
        temp=*(s+i);
        if(bin_hash[temp]==0)
        {
            bin_hash[temp]=1;
            *(s+j)=*(s+i);
            j++;
        }
        i++;
    }

    *(s+j)='\0';
    return s;
}



int main()
{
    char str[]="bbaacc\\";
    printf("%s",RemoveDupls(str));
    return 0;
}