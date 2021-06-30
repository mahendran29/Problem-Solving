#include <stdio.h>

void MaximumOne(int a[][4],int n)
{
    int max[4]={0};
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        max[i]=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                max[i]++;
            }
        }
    }

     int large = max[0];
     int index=0;
     for(i=1;i<4;i++)
     {
        if(max[i]>large)
        {
            large = max[i];
            index=i;
        }
     }

    printf("%dth row has %d 1's",index,large);
}


void main()
{
    int a[][4]={{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};
    int n = sizeof(a)/sizeof(a[0]);
   // printf("%d",n);
    MaximumOne(a,n);
}