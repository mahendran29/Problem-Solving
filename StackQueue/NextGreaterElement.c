#include <stdio.h>
/*struct Stack
{
  int top;
  int b[10];
};

struct Stack s;

void push(int k)
{
    if(s.top==10)
    {
        printf("Stack is full");
    }
    else
    {
         int top2 = s.top;
         s.b[top2]=k;
        // printf("%d:%d\t",s.top,s.b[top2]);
         s.top+=1;
         
    }
}

int pop()
{
    if(s.top==-1)
    {
        printf("Stack is empty");
        return 0;
    }
    else
    {
       int n = s.top-=1;
       return n;
    }
}*/


int top=-1;
void push(int a[],int key,int n)
{
    if(top==n)
    {
        printf("Stack is full");
    }
    else
    {
        a[++top]=key;
    }
}

int pop(int a[])
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        int ret = a[top--];
        return ret;
    }
}

int isEmpty()
{
    int r = (top==-1)?1:0;
    return r;
}

void printNGE(int a[],int n)
{
    int i,next,element;
    push(a,a[0],n);
    for(i=1;i<n;i++)
    {
        int next = a[i];
        
        element = pop(a);

        while(element<next)
        {
            printf("%d--->%d\n",element,next);
            if(isEmpty()==1)
            {
                break;
            }
            element=pop(a);
        }

        if(element>next)
        {
            push(a,element,n);
        }

        push(a,next,n);

    }

    while(isEmpty()==0)
    {
        int s = pop(a);
        int next = -1;
        printf("%d-->%d\n",s,next);
    }



}


int main()
{
    int a[]={6,8,0,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    printNGE(a,n);
}