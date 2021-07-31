#include <stdio.h>
#include <limits.h>

void main()
{
     int a[]  = {-2, -3, 4, -1, -2, 1, 5, -3};
     int n=8;
     int max_so_far=INT_MIN,max_ending=0;
     
      for(int i=0;i<n;i++)
      {
          max_ending = max_ending+a[i];
          if(max_so_far<max_ending)
             max_so_far=max_ending;
          if(max_ending<0)
            max_ending=0;
      }

      printf("%d",max_so_far);
    
   
}    