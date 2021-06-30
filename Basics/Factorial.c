#include <stdio.h>

int fact(int N)
{
    if(N==1)
    {
        return 1;
    }

    N = N * fact(N-1);
    return N;
}




void main()
{
    int N=4;
    printf("%d",fact(N));
}