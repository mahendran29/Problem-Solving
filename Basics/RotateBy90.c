#include <stdio.h>
#define N 3

void ReverseRows(int a[N][N])
{
    int i,j,k,temp;;
    for(i=0;i<N;i++)
    {
      k=N-1;
      for(j=0;j<k;j++)
      {
           temp = a[i][j];
           a[i][j] = a[i][k];
           a[i][k] = temp;
           k--;
      }
    }
}



void Transpose(int a[N][N])
{
   int i,j;
   int temp;
   for(i=0;i<N;i++)
   {
       for(j=i;j<N;j++)
       {
           temp = a[i][j];
           a[i][j] = a[j][i];
           a[j][i] = temp;
       }
   }
}

void PrintMatrix(int a[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    PrintMatrix(a);
    ReverseRows(a);
    PrintMatrix(a);

}