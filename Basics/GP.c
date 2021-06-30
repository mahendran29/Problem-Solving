#include <stdio.h>
#include <math.h>

void main()
{
    int A=4;
    int R=3;
    int N=3;

    int GP = A*pow(R,N-1);
    printf("%d",GP);
}