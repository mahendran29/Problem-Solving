#include <stdio.h>

void Sort(int a[],int n)
{
    int count[3]={0};
    int i,j;

    for(i=0;i<n;i++)
    {
       count[a[i]]++;
    }

    for(i=0,j=0;i<3;i++)
    {
        for(;count[i]!=0;count[i]--)
        {
            a[j++]=i;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int a[]={0,2,1,2,0};
    int n=5;
    Sort(a,n);
}
/*#include <stdio.h>

Sort(int a[],int n)
{
    int d=0,b=0,c=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
           d++;
        }
        else if(a[i]==1)
        {
           b++;
        }
        else if(a[i]==2)
        {
            c++;
        }
    }
   
    for(i=0;i<d;i++)
    {
        printf("%d",0);

    }
    for(i=0;i<b;i++)
    {
        printf("%d",1);

    }
    for(i=0;i<c;i++)
    {
        printf("%d",2);

    }
   
}



int main()
{
    int a[]={0,2,1,2,0};

    Sort(a,5);
  
}*/