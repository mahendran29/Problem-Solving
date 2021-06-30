#include <stdio.h>

int SUM(int x)
{
    if(x==1)
       {
       printf("%d\n",x);
       return 1;
         }
    else
      {
       SUM(x-1);
       printf("%d\n",x);
        }

} 


int main()
{
   int a;
   printf("Enter the elements till to be printed:");
   scanf("%d",&a);
   
   SUM(a);

  

}