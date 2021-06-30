#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int *A;
    int *B;
    int size;
    int length;
};

void Sorting(struct Array *arr,int n);

void Sorting(struct Array *arr,int n)
{
    int i,j=0;

    for(i=0;i<n-1;i++)
    {
        if(arr->A[i]!=arr->A[i+1]);
           {
               arr->B[j] = arr->A[i];
               printf("%d",arr->B[j]);
               j++;
           }

        
    }
    arr->B[j++] = arr->A[n-1];

    for(i=0;i<j;i++)
    {
        arr->A[i] = arr->B[i];
     }

    printf("The elements after sorting are:");
    for(i=0;i<j;i++)
    {
        printf("%d",arr->B[i]);
    }
}



int main()
{
    struct Array arr;
    int i;

    //Giving the total size of the array
    printf("Enter the size of the array:");
    scanf("%d",&arr.size);
    printf("\n");

    //Allocating space in heap memory 
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.B = (int *)malloc(arr.size*sizeof(int));

    //Number of elements in the array
    printf("Number of elements in the array:");
    scanf("%d",&arr.length);
    printf("\n");

    //Getting input from the user
    printf("Enter the elements in the array:");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    printf("\n");

    //Displaying the elements before sorting
    printf("The elements before sorting are:");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
    printf("\n");

    int n =arr.length;
    printf("%d",n);
    printf("\n");

    Sorting(&arr,n);
   
}
/*
void Sorting(int a[],int n)
{
    int b[5];
    int i,j=0;

    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
           b[j++]=a[i];
           
        }

    }
    b[j++]=a[n-1];

    

    printf("Enter the elements of the array after sorting:");
    for(i=0;i<j;i++)
    {
         printf("%d\n",b[i]);
     }



}
int main()
{
     int a[100];
     int n,i;

     printf("Enter the number of elements:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     printf("The elements of the array:");
     for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
     }
     printf("\n");
     Sorting(a,n);


} */