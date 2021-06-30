class RemoveString 
{
    public static void main(String args[])
    {
        int i,j;
        String s="JAVA";
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(j>=i)
                System.out.print(s.charAt(j)+" ");
                else
                System.out.print("  ");
            }
            System.out.println();

        }
    }
    
}
