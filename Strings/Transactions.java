public class Transactions 
{

    static int Max(int a[])
    {
        int max=0;
        for(int i=0;i<a.length;i++)
        {
            if(a[i]>max)
            {
                 max =a[i];
            }
        }

        return max;
    }

    public static void main(String args[])
    {
        String s[] ={"99 98 300","66 66 200","98 77 500"};
       int a[]=new int[6];
       int i,k=0;
       for(i=0;i<3;i++)
       {
           int j=0;
           a[k++] = ((char)(s[i].charAt(j)-'0')*10)+((char)(s[i].charAt(j+1)-'0'));
           a[k++] = ((char)(s[i].charAt(j+3)-'0')*10)+((char)(s[i].charAt(j+4)-'0'));
       }
      
        int max = Max(a);
        int hash[] = new int[max+1];
        for(i=0;i<6;i++)
        {
            hash[a[i]]++;
        }

        for(i=0;i<=max;i++)
        {
            if(hash[i]!=0 && hash[i]>=2)
                  System.out.println(i);
        }

    }
    
}
