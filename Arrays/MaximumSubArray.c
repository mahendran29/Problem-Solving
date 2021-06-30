#include <stdio.h>

// void MaximumSubArray(int a[],int n)
// {
//     int max1=0,max2=0,i;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]<=0)
//         {
//             if(max1>=max2)
//             {
//                 max2=max1;
               
//             }
//              max1=0;
           
//         }

//         max1+=a[i];
//     }

//     printf("%d",max2);
// }


void MaximumSubArray(int a[],int n)
{
     int i,si=0,ei=0,max=0,cur=0,temp=0;
     for(i=0;i<n;i++)
     {
	        cur += a[i];
	        if(max<=cur){
	            max=cur;
	            si=temp;
	            ei=i;
	        }
	        if(a[i]<0){
	            cur=0;
	            temp=i+1;
	        }
	        
	    }

}


void main()
{
    int a[]={1,2,5,-7,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    MaximumSubArray(a,n);
}