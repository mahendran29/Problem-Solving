#include <stdio.h>

void SnakeMat(int mat[][2])
{
    int i,j,a,b;
    for(i=0;i<2;i++)
    {
       if(i%2==0)
       {
           a=0,b=2;
           for(j=a;j<b;j++)
          {
                printf("%d ",mat[i][j]);
           }
       }
       else
       {
           a=1,b=0;
           for(j=a;j>=b;j--)
          {
                printf("%d ",mat[i][j]);
           }
       }
        

    }

}


void main()
{
    
    int mat[][2] = {{1, 2},
              {3, 4}};
    
    SnakeMat(mat);
}

/* int i,j,a,b,k=0;
    int des[n*n];
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           a=0,b=n;
           for(j=a;j<b;j++)
          {
                des[k]=mat[i][j];
                k++;
           }
       }
       else
       {
           a=n-1,b=0;
           for(j=a;j>=0;j--)
          {
                des[k]=mat[i][j];
                k++;
           }
       }
        

    }
    return des;*/