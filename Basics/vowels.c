#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void vowels(char a[],int n)
{
    int i;
    int j=0;
    char b[n];
    for(i=0;i<n;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            b[j]=a[i];
           
            j++;
        }
    }
    
    for(i=0;i<n;i++)
    {
         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            a[i]=b[--j];
            
        }
    } 
    printf("%s",a);

}


int main()
{
    char s[]="practice";
    int n = strlen(s);
    vowels(s,n);
}