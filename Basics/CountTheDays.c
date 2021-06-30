#include <stdio.h>
#include <stdlib.h>

int months[]={31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
struct Year
{
    int d;
    int m;
    int y;
};
int countLeapYears(struct Year y1)
{
    int years = y1.y;
    if(y1.m<=2)
    {
        years--;
    }

    return years/400-years/100+years/4;
}

int CountDays(struct Year y1,struct Year y2)
{
    int i;
    int d1 = y1.y*365+y1.d;
    for(i=0;i<y1.m-1;i++)
    {
        d1+=months[i];
    }

     d1+=countLeapYears(y1);
    

    int d2 = y2.y*365+y2.d;
    for(i=0;i<y2.m-1;i++)
    {
        d2+=months[i];
    }

    d2+=countLeapYears(y2);

    return d2-d1;
}

void main()
{
    struct Year y1 = {1,2,2000};
    struct Year y2 = {1,2,2004};

    int days=CountDays(y1,y2);
    printf("Number of days:%d",days);

}