class NumberChange 
{
    public static void main(String ars[])
    {
        int i,j;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(i+j<=5)
                System.out.print((i+j-1)+" ");
                else
                System.out.print(((i*j)/5)+" ");
            }
            System.out.println();
        }
    }
    
}
