#include <stdio.h>

void Transpose(int mat[][2],int tran[][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            tran[j][i]=mat[i][j];
        }
    }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",tran[i][j]);
        }
         printf("\n");
    }
}


void main()
{
    int mat[2][2] = {{1, 2},
           {-9, -2}};

   int tran[2][2]={0};

   Transpose(mat,tran);
}