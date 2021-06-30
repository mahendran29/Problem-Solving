#include <stdio.h>
int Max(int a[][3],int n)
{
    int i,j;
    int max=0;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(a[i][j]>max)
          {
              max = a[i][j];
        }
       }
    }
    return max;
}
void Distinct(int a[][3],int n)
{
    int i,j,minus=-1,k=0,count=0;
    int max = Max(a,n);
    int hash[max+1];
    for(i=0;i<max+1;i++)
    {
        hash[i]=0;
    }
   
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(hash[a[i][j]]==(minus+1))                  
           {                                            
               hash[a[i][j]]=minus;                       
                                                          
           }                                              
           
        }
         minus--;
    }
    for(i=0;i<=max;i++)
    {
        if(hash[i]==(minus+1))
        {
            count++;
        }
    }

    printf("COunt:%d",count);
    
}


void main()
{
    int n =3;
    // int a[][4]= {{1, 2, 1, 2},
    //  {2, 2, 2, 1},
    //  {2, 1, 2, 2},
    //  {2, 1,1,1}};
    int a[][3]= {
                 {1, 1, 1},
                  {1, 1 , 1},
                   {1, 1, 1}
                   };

    //  int a[][5]={{12, 1, 14, 3, 16},
    //  {14, 2, 1, 3, 35},
    //  {14, 1, 14, 3, 11},
    //  {14, 5, 3, 2, 1},
    //  {1, 18, 3, 21, 14}};

     Distinct(a,n);
}


/*
 int i,j,minus=-1,k=0,count=0;
          int max=0;
          for(i=0;i<n;i++)
          {
             for(j=0;j<n;j++)
             {
                if(a[i][j]>max)
                {
                   max = a[i][j];
                 }
               }
           }
            int hash[]=new int[max+1];
           for(i=0;i<max+1;i++)
            {
               hash[i]=0;
             }
   
            for(i=0;i<n;i++)
             {
                  for(j=0;j<n;j++)
                   {
                     if(hash[a[i][j]]==(minus+1))
                       {
                          hash[a[i][j]]=minus;
              
                        }
           
                   }
                minus--;
               }
   
           for(i=0;i<=max;i++)
            {
              if(hash[i]==(minus+1))
                {
                   count++;
                }
            }
           
     
     return count;*/