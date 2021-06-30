#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n;
   printf("Enter the value:");
   scanf("%d\n",&n);
   int i,j;
   int row=n*2-1;
   int column=n*2-1;
   int a[row][column];
  

   int top=0,left=0;
   int bottom=sizeof(a)/sizeof(a[0])-1;
   int right=sizeof(a)/sizeof(a[0])-1;
   
    int count=n;
 
   
    while(1)
    {
        if(left>right)
        {
            break;
        }

        for(i=left;i<=right;i++)
        {
             a[top][i]=count;
        }
        top++;

        if(top>bottom)
        {
           break;
        }

       for(i=top;i<=bottom;i++)
       {
          a[i][right]=count;
         }
        right--;
    
        if(left>right)
        {
           break;
         }

         for(i=right;i>=left;i--)
        {
          a[bottom][i]=count;
         }
         bottom--;

        if(top>bottom)
       {
          break;
        }

        for(i=bottom;i>=top;i--)
       {
           a[i][left]=count;
        }
         left++;
    

       count--;
    }

   
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}