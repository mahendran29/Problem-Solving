#include <stdio.h>
#include <string.h>

void Merging(char a[],char b[],int m,int n)
{
    int x = m+n;
    int i=0,j=0,k=0;
    int merg[x];
 

    for(i=0;i<x;i++)
    {
        merg[i]=0;
      
    }

    i=0;
    while(i<m && i<n)
    {
        merg[k++]=a[i];
        merg[k++]=b[j];
        i++;
        j++;
        
    }

    while(i<m)
    {
        merg[k++]=a[i++];
      
    }

     while(j<n)
    {
        merg[k++]=a[j++];
     

    }

    for(i=0;i<x;i++)
    {
       printf("%c",merg[i]);
    }
}



void main()
{
    char a[]="abc";
    char b[]="def";

    int m = strlen(a);
    int n = strlen(b);

    Merging(a,b,m,n);
}