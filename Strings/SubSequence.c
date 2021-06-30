#include <stdio.h>
#include <string.h>

void Sequence(char a[],char b[],int m,int n)
{
    int i,j;
    for(i=0,j=0;a[j]&&b[i];i++)
    {
        if(a[j]==b[i])
        {
            j++;
        }
    }

    if(j==m)
    {
        printf("Exists");
    }
    else
    {
        printf("Not Exist");
    }

}



void main()
{
    char a[]=" AXY ";
    char b[]="YADXCP";
    int m = strlen(a);
    int n = strlen(b);

    Sequence(a,b,m,n);
}