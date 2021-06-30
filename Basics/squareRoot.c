#include <stdio.h>
#include <math.h>


int main()
{
    int x1=25,x2=15,y1=15,y2=10;

    int sqx = (x2-x1)*(x2-x1);
    int sqy = (y2-y1)*(y2-y1); 

    printf("sqx:%d",sqx);
    printf("sqy:%d",sqy);
    int root = sqx+sqy;
    float val = sqrt(root);
    printf("Distance:%f",val);
}