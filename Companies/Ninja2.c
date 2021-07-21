#include <stdio.h>

void main()
{

int a[3][3]={
              {11,2,4},
              {4,5,6},
              {10,8,-12}
                };

   int i,j,ld=0,rd=0;

   for(i=0;i<3;i++)
   {
        ld+=a[i][i];
        rd+=a[i][3-i-1];
   }

   int sum = ld-rd;
   if(sum<0)
      sum*=-1;
    
    printf("%d",sum);


}