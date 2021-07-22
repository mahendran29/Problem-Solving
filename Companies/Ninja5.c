#include <stdio.h>

void main()
{
    int n,m,r,sumi=0,sumo=0;
    scanf("%d %d %d",&n,&m,&r);

    int in[n];
    int out[m];
    int i;
    printf("Enter the inside pipe:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&in[i]);
    }

    printf("Enter the outside pipe");

    for(i=0;i<m;i++)
      scanf("%d",&out[i]);

    for(i=0;i<n;i++)
     sumi+=in[i]-r;
    
    for(i=0;i<m;i++)
     sumo+=out[i]-r;
     
    if(sumi==sumo)
    {
        printf("BALANCED");
        return;
    }

    if(sumo>sumi)
    {
        printf("%d",sumo-sumi+r);
        return;
    }

    if(sumi>sumo)
    {
        printf("%d",-1*(sumi-sumo+r));
        return;
    }
}