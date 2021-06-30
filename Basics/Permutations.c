#include <stdio.h>
int fact(int N)
{
    if(N<=1)
    {
        return 1;
    }

    return N*fact(N-1);
    
}

void main()
{
    int n=3,r=3;
    int a = fact(n);
    int b = fact(n-r);
    int result = a/b;
    printf("%d",result);
}