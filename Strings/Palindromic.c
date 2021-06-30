#include <stdio.h>
#include <string.h>
void EvenPalindrome(char *a,int n)
{
    int i;
    int flag=0;
    for(i=0;i<n;i++)
    {
        int low=i;
        int high=n-1;
        while(low<high)
        {
            if((high-low)==1)
            {
                flag=1;
                break;printf("Done");
            }

            if(a[low]==a[high])
            {
                low++;
                high--;
            }

            if(a[low]!=a[high])
            {
                break;
            }

            
        } 
        if(flag)
        {
            break;
        }
    }

    if(i<n-1)
    {
        for(int k=i;k<n;k++)
        {
            printf("%c",a[k]);
        }
    }
}

void OddPalindrome(char *a,int n)
{
     int i;
    int flag=0;
    for(i=0;i<n;i++)
    {
        int low=i;
        int high=n-1;
        while(low<=high)
        {
            if(high==low)
            {
                flag=1;
                break;
            }

            if(a[low]==a[high])
            {
                low++;
                high--;
            }

            if(a[low]!=a[high])
            {
                break;
            }

            
        } 
        if(flag)
        {
            break;
        }
    }

    if(i<n-1)
    {
        for(int k=i;k<n;k++)
        {
            printf("%c",a[k]);
        }
    }

}
int main()
{
    char str[50];
    scanf("%s",&str);

    int n = strlen(str);
    int ch = (n%2==0)?1:2;

    switch (ch)
    {
    case 1:
        EvenPalindrome(str,n);
        break;
    case 2:
        OddPalindrome(str,n);
        break;
    
    default:
        break;
    }
}