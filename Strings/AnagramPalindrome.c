#include <stdio.h>
#include <string.h>
int HASH[26];

void AnagramPalindrome(char s[],int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {                       
        HASH[s[i]-'a']++;   
                            
    }

    for(i=0;i<26;i++)
    {
        if(HASH[i]%2!=0)
        {
          count++;
        }
    }

  

    if(count==1)
    {
        printf("Anagram Palindrome");
    }
    else
    {
        printf("Not an Anagram Palindrome");
    }
}

void main()
{
    char s[]="geeksogeeks";
    int n = strlen(s);

    AnagramPalindrome(s,n);

}