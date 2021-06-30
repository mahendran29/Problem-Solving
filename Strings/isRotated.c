#include <stdio.h>
#include <string.h>

int Rotation(char s[],char b[],int a,int n);
void RotateByOne(char s[],int n);

int Rotation(char s[],char b[],int a,int n)
{
    int flag=0;
    for(int i=0;i<a;i++)
    {
        RotateByOne(s,n);
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]==b[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }

    return flag;
   
}

void RotateByOne(char s[],int n)
{
    int temp = s[0];
    for(int i=0;i<n-1;i++)
    {
        s[i]=s[i+1];
    }
    s[n-1]=temp;
}


void main()
{
    char s[]="amazon";
    char b[]="azonam";

    int n = strlen(s);

    if(Rotation(s,b,2,n))
    {
        printf("It is rotated by two places");
    }
    else
    {
        printf("It is not rotated by two places");
    }

    printf("\n%s",s);
}