#include <stdio.h>


void Spiral(int a[5][5],int top,int bottom,int left,int right)
{
    int i;

    while (1)
    {
         if(left>right)
     {
         return;
     }

     for(i=left;i<=right;i++)
     {
        printf("%d ",a[top][i]);
     }
    top++;

    if(top>bottom)
    {
        return;
    }

    for(i=top;i<=bottom;i++)
    {
        printf("%d ",a[i][right]);
    }
    right--;
    
    if(left>right)
    {
        return;
    }

    for(i=right;i>=left;i--)
    {
        printf("%d ",a[bottom][i]);
    }
    bottom--;

    if(top>bottom)
    {
        return;
    }

    for(i=bottom;i>=top;i--)
    {
        printf("%d ",a[i][left]);
    }
    left++;
    }
    
    
}

int main()
{
    int a[5][5]={
			{ 1, 2, 3, 4, 5},
			{16, 17, 18, 19, 6},
			{15, 24, 25, 20, 7},
			{14, 23, 22, 21, 8},
			{13, 12, 11, 10, 9}
		};
    int top=0,left=0;
    int right = sizeof(a)/sizeof(a[0])-1;
    int bottom = sizeof(a)/sizeof(a[0])-1;

 

    Spiral(a,top,bottom,left,right);

}