class UpperCaseConversion
{
	void DemoUpperCase(char a[])
	{
        a[0]=Character.toUpperCase(a[0]);

        int i;
        for(i=1;i<a.length;i++)
        {
        	if(a[i-1]==' ')
        	{
        		a[i]=Character.toUpperCase(a[i]);
        	}
        }

        String str = String.valueOf(a);
        System.out.println(str);

        // for(i=0;i<a.length;i++)
        // {
        // 	System.out.print(a[i]);
        // }
	}
}



class Demo4
{
	public static void main(String args[])
	{
		String s="i love programming";
		char a[]=s.toCharArray();

		UpperCaseConversion ucc = new UpperCaseConversion();
		ucc.DemoUpperCase(a);
	}
}