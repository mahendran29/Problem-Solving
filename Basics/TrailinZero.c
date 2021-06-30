#include <stdio.h>

int TrailingZero(int n)
{
    int count=0;
     int i=0;
    for(i=5;(n/i)>=1;i*=5)
    {
        count+=(n/i);
    }
  
    return count;
}

int main()
{
    int n = 4;
    printf("%d",TrailingZero(n));
}