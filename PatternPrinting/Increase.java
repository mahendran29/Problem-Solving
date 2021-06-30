class Increase 
{
    public static void main(String args[])
    {
        int inc=1,i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.print(inc+" ");
            }
            ++inc;
            System.out.println();
        }
    }
    
}
