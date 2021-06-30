#include <stdio.h>
#include <string.h>
#define NO_OF_CHARS 256

void RemoveChar(char ch1[],char ch2[])
{
     int second[NO_OF_CHARS]={0};
     int n1 = strlen(ch2);
   //  int n2 = strlen(ch1);
     int i=0,j=0;

     for(i=0;i<n1;i++)
     {
         second[ch2[i]]++;
     }

  
      i=0;
      while(ch1[i])
      {
          char c = ch1[i];
          if(second[c]==0)
          {
              ch1[j]=ch1[i];
              j++;
          }
          i++;
      }   

      ch1[j]='\0';

      printf("%s",ch1);


}


void main()
{
    char ch1[] = "occurence";
    char ch2[] = "car"; 

    RemoveChar(ch1,ch2);
}