#include <stdio.h>
#define N 10
int a[N];
int top1=-1;
int top2=10;
                                    
void push1(int num)                   // 0 1 2 3 4 5 6 7 8 9
{
    if(top1==((N/2)-1))
    {
         printf("Stack1 is full");
         return;
    }
    a[++top1]=num;
}

void push2(int num)
{
    if(top2==(N/2))
    {
        printf("Stack2 is full");
        return;
    }
    a[--top2]=num;
}

void pop1()
{
    if(top1==-1)
    {
        printf("Stack1 is empty");
        return;
    }

    top1--;
}

void pop2()
{
    if(top2==N)
    {
        printf("Stack2 is empty");
        return;
    }

    top2++;
}



void main()
{
    push1(2);
    push1(3);
    push2(4);
    push2(5);

    int i;
    for(i=0;i<N;i++)
    {
        printf("i:%d\n",a[i]);
    }
     printf("TOP:%d %d\n",top1,top2);
    pop1();
    pop2();
    printf("TOP:%d %d",top1,top2);

     for(i=0;i<N;i++)
    {
        printf("i:%d\n",a[i]);
    }

    


}