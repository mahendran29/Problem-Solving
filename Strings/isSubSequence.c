#include <stdio.h>
#include <string.h>


int isSubSequence(char str1[],char str2[],int a,int b)
{
    int i=a-1;
    int j=b-1;
    if(a==0)
      return 1;
    if(b==0)
      return 0;

    if(str1[i]==str2[j])
        return isSubSequence(str1,str2,a-1,b-1);
    else
        return isSubSequence(str1,str2,a,b-1);
}

int main()
{
    char str1[]="gksrek";
    char str2[]="geeksforgeeks";
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    isSubSequence(str1,str2,len1,len2)?printf("Yes"):printf("No");
}