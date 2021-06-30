#include <stdio.h>
#include <string.h>

void BinaryAdd(char a[],char b[],int m,int n)
{
    int sum=0,carry=0,count=0;
    char c[32]={0};
    int i=m-1,j=n-1,k=0;
    while(i>=0||j>=0||sum==1)
    {
        sum+=((i>=0)?(a[i]-'0'):0);
        sum+=((j>=0)?(b[j]-'0'):0);
    

        c[k++]=sum%2+'0';

        sum = sum / 2;
        i--;
        j--;
    }

    for(i=k-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
}



void main()
{
    char a[]="10000";
    char b[]="1";
    int m = strlen(a);
    int n = strlen(b);

    BinaryAdd(a,b,m,n);

}