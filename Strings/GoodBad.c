#include <stdio.h>
#include <string.h>
int GoodOrBad(char a[],int n)
{
    int i,vowels=0,conso=0,k=0;
         for(i=0;i<n;i++)
         {
         	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
         	{
         		vowels++;
         		conso=0;
         		
         	}
         	else if(!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='?'))
         	{
         		conso++;
         		vowels=0;
         		
         	}
         	else
         	{
         		conso++;
         		vowels++;
         		
         	}

         	if(conso>3 || vowels>5)
         	{
         		return 0;
         		
         	}
         }

        return 1;

}


void main()
{
    char a[]="aeioup??";
    int n = strlen(a);
    GoodOrBad(a,n)?printf("Good"):printf("Bad");
}