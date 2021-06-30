#include <stdio.h>
#include <string.h>
#define MAX 10
char stack[MAX];
int top=-1;

void push(char c)
{
    if(top==MAX)
    {
        printf("Stack is full");
        return;
    }
    stack[++top]=c;
}

int pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
        return 0;
    }

    return stack[top--];
}

int Check(char a[],int n)
{
   int i;
   char c;
   for(i=0;i<n;i++)
   {
       switch (a[i])
       {
       case '{':
           push(a[i]);
           break;
           
       case '[':
           push(a[i]);
           break;
           
       case '(':
           push(a[i]);
           break;
           
       case '}':
           if(pop()!='{')
           {
              return 0;
           }
           break;
           
       case ']':
           if(pop()!='[')
             return 0;
           break;
           
       case ')':
           if(pop()!='(')
           return 0;
           break;
       
       default:
           break;
       }
   }
}


void main()
{
    char a[]="[()]{}{[()()]()}";
    int n=strlen(a);

    if(Check(a,n))
    printf("MATCHING");
    else
    printf("NOT MATCHING");
}