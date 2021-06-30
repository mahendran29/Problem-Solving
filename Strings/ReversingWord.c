#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Reverse(char a[],int n)
{
    
    int i,j,k=0;
    int temp;
    for(i=0,j=0;j<n;j++)
    {
        if(a[j]=='.' || j==n-1)
        {
            if(j<n-1)
            {
                k=j-1;
            }
            else
            {
                k=j;
            }

            while(i<k)
            {
              temp = a[i];
              a[i]=a[k];
              a[k]=temp;
              i++;
              k--;
            }

            i=j+1;
        }
    }
    printf("After reversing:");
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }

}

void main()
{
    char a[]="I.like.this.program.very.much";
    int n = strlen(a);
    Reverse(a,n);
}