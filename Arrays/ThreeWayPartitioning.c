#include <stdio.h>

void ThreeWayPartitioning(int a[],int n,int low,int high)
{
    int lowVal=0,midVal=0,highVal=0,i=0,l=0,m=0,h=0;
    int b[n];

    for(i=0;i<n;i++)
    {
       if(a[i]>=low&&a[i]<=high)
       {
           midVal++;
       }
       else if(a[i]<low)
       {
           lowVal++;
       }
       else
       {
           highVal++;
       }
    }

    m = lowVal;
    h = lowVal+midVal;

    printf("%d %d %d\n",l,m,h);

    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
 
    for(i=0;i<n;i++)
    {
       if(a[i]>=low&&a[i]<=high)
       {
           b[m++]=a[i];
       }
       else if(a[i]<low)
       {
           b[l++]=a[i];
       }
       else
       {
           b[h++]=a[i];
       }
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",b[i]);
    }
}



void main()
{

    int a[]={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(a)/sizeof(a[0]);

    ThreeWayPartitioning(a,n,14,20);
}
