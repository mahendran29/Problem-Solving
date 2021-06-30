#include <stdio.h>
#include <string.h>

int Rotation(char a[],char b[],int n);
int RotatebyOne(char a[],char b[],int n);

int Rotation(char a[],char b[],int n)
{
    int i=0,flag=0;
    for(i=0;i<n;i++)
    {
       flag=RotatebyOne(a,b,n);
       if(flag==1)
       {
           return 1;
       }
      

    }
    return 0;
}


int RotatebyOne(char a[],char b[],int n)
{
    char temp = a[0];
    int i,k=0;
    for(i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }

    a[n-1]=temp;

    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            k++;
        }
    }

    if(k==n)
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
    char a[]="mightandmagic";
    char b[]="andmagicmigth";
    int n = strlen(b);

    Rotation(a,b,n)?printf("Possible"):printf("Not Possible");
}