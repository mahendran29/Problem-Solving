class SieveOfEratosthenes
{
   static void Primes(int N)
   {
       int i,j;
       boolean prime[] = new boolean[N+1];
       for(i=0;i<=N;i++)
          prime[i]=true;

       for(i=2;i*i<=N;i++)
       {
           if(prime[i]==true)
           {
               for(j=i*i;j<=N;j+=i)
               {
                   prime[j]=false;
               }
           }
       }


       for(i=2;i<=N;i++)
        {
            if(prime[i]==true)
              System.out.print(i+" ");
        }
   }




    public static void main(String[] args) 
    {
        int n=5;
        Primes(n);
    }
}