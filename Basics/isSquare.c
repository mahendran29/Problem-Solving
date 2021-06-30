#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Square
{
    int x;
    int y;
};

void main()
{
    struct Square A,B,C,D;
    A.x=2;
    A.y=1;

    B.x=10;
    B.y=20;

    C.x=5;
    C.y=6;

    D.x=10;
    D.y=10;

    int t=0;
    int totalAB=0,totalBC=0,totalCD=0,totalAD=0;

    t = ((B.x-A.x)*(B.x-A.x))+((B.y-A.y)*(B.y-A.y));
    printf("AB:%d\n",t);
    totalAB = sqrt(t);

    t=0;
    t = ((C.x-B.x)*(C.x-B.x))+((C.y-B.y)*(C.y-B.y));
    printf("BC:%d\n",t);
    totalBC = sqrt(t);

    t=0;
    t = ((D.x-C.x)*(D.x-C.x))+((D.y-C.y)*(D.y-C.y));
    printf("CD:%d\n",t);
    totalCD = sqrt(t);

    t=0;
    t = ((D.x-A.x)*(D.x-A.x))+((D.y-A.y)*(D.y-A.y));
    printf("DA:%d\n",t);
    totalAD = sqrt(t);

     printf("%d %d %d %d",totalAB,totalBC,totalCD,totalAD);
    if(totalAB == totalBC && totalCD == totalAD )
    {
        printf("It is square");
    }
    else
    {
        printf("It is not a square");
    }
}