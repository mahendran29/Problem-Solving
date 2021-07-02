// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main() {
    // Write C code here
    int a[]={1,2,3,2};
    int n =4;
    int x=1,y=2;
    
    int count=0,flag=0,flag2=0,min=INT_MAX,i,index1=0,index2=0;
    for(i=0;i<n;i++)
    {
       if(a[i]==x)
        {
            index1=i;
            flag2=1;
            if(flag==1)
            {
                count=index2-index1;
            }
        }
        
        if(a[i]==y)
        {
            flag=1;
            index2=i;
             if(flag2==1)
             {
                 count = index2-index1;
             }
        }
        
        if(flag==1&&flag2==1&&count<=min)
            min=count;
    }
    
    if(flag==1&&flag2==1)
    {
         printf("Minimum:%d",min);
    }
    else
    {
        printf("-1");
    }
    
    
    return 0;
}