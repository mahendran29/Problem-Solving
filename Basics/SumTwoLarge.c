#include <stdio.h>
#include <string.h>
int c;
int Sum(char c[],int n)
{
    int r,sum=0;
    int i=0;
    while(n>0)
    {
          r=c[i++]-'0';
          sum=sum*10+r;
          n--;
    }  
    return sum;
    
}

void toString(int sum)
{
    int rev=0,count=0;
    int i=0,r=0;
    int n=0;
    while(sum!=0)
    {
      r=sum%10;
        if(r==0 && rev==0)
        {
           c++;
        }
      rev = rev*10+r;
      sum=sum/10;
      count++;
    }
    r=0;
    char a[count+1];
    while(rev!=0)
    {
      r= rev%10;
      a[i++]=r+'0';
      rev=rev/10;
      
    }
    for(int k=i;k<i+c;k++)
    {
        a[k]='0';
    }
    
      for(int s=0;s<=count;s++)
      {
         printf("%c",a[s]);
      }
     
    

}

void Change(char x[],char y[],int n1,int n2)
{
    int sum1 = Sum(x,n1);
    int sum2 = Sum(y,n2);
    int sum = sum1+sum2;
    //printf("S:%d",sum);
    toString(sum); 
}

void main()
{
    char x[]="1010";
    char y[]="5050";
    int n1 = strlen(x);
    int n2 = strlen(y);
    Change(x,y,n1,n2);
    
    
}
