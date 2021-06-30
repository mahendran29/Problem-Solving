#include <stdio.h>

void CountSquares(int n)
{
    int count=0,i=1,result=0;
    while(result<n)
    {
        result=i*i;
        i++;
        count++;
    }
    printf("\n%d",count-1);
}


void main()
{
    int N;
    scanf("%d",&N);
    CountSquares(N);
}