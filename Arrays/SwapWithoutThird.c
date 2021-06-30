#include <stdio.h>

int main()
{
     int a=5,b=10;

      printf("Before Swapping:A = %d B = %d",a,b);
      a = a+b;
      b = a-b;
      a = a-b;
      printf("After Swapping:A = %d B = %d",a,b);


}