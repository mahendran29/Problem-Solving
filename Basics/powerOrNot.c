#include <stdio.h>
int PowerOrnot(int x,int y)
{
    int r=1;
    if(x==1)
    {
        return 0;
    }
    while(r<y)
    {
         r = r*x;
    }

    return (r==y);
}
void main()
{
    int x =1,y=3;

    PowerOrnot(x,y)?printf("1"):printf("0");

}