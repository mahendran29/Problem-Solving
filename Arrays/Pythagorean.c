#include <stdio.h>

void Pyth(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                int x=a[i]*a[i];
                int y=a[j]*a[j];
                int z=a[k]*a[k];

                if(x==y+z || y==z+x || z==x+y)
                {
                    printf("True");
                }
                
            }

        }
    }
}

int main()
{
    int a[]={3,8,5};
    int n = sizeof(a)/sizeof(a[0]);
  
    Pyth(a,n);
}