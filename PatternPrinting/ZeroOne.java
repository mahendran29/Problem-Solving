class ZeroOne 
{
    public static void main(String args[])
    {
        int i,j;
        boolean flag=false;
        int val=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
                flag=!flag;
                val=(flag==true)?1:0;
                System.out.print(val+" ");

            }
            if(i%2!=0)
            {
                flag=!flag;
            }
          
            System.out.println();
        }
    }
    
}
