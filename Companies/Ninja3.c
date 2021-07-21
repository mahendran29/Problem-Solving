#include <stdio.h>

void main()
{
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);

    while(n!=1)
    {
        m = (m*p)/100;
        n--;
    }

    printf("%d",m);
}