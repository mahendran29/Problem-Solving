#include <stdio.h>

void MissingandRepeating(int a[],int elem)
{
    int sum=0,total=0,i,miss;
    int hash[elem+1];
    for(i=0;i<=elem;i++)
    {
        hash[i]=0;
    }
    for(i=0;i<elem;i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<=elem;i++)
    {
       if(hash[i]==2)
       {
           printf("The Repeating element is:%d",i);
       }

    }

 
    total= elem*(elem+1)/2;
    for(i=0;i<=elem;i++)
    {
        if(hash[i]!=0)
        {
            sum+=i;
        }
    }

    miss = total-sum;
    printf("The missing element is:%d",miss);

}

void main()
{
    int arr[10];
    int elem,i;
    printf("Enter number of elements:");
    scanf("%d",&elem);
    printf("Enter elements:");
    for(i=0;i<elem;i++)
    {
        scanf("%d",&arr[i]);
    }

    MissingandRepeating(arr,elem);
}