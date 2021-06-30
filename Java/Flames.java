class Flames
{
	public static void main(String args[])
	{
		String a="AJAY";
		String b="PRIYA";
		char y[]=a.toCharArray();
		char z[]=b.toCharArray();

		int i,j,sp=0,t,n;
		n=a.length()+b.length();
		for(i=0;i<a.length();i++)
		{
			for(j=0;j<b.length();j++)
			{
				if(y[i]==z[j]&&z[j]!='#')
				{
					z[j]='#';
					System.out.println(" "+i+" "+j);
					sp=sp+2;
					break;
				}
			}
		}

		t = n-sp;

		String flam="Flames";
	    StringBuilder sb3 = new StringBuilder(flam);

        char flameResult = '0';

        while(sb3.length()!=1)
        {
            int p = t%sb3.length();
            String temp;

            if(p!=0)
            {
                temp = sb3.substring(p)+sb3.substring(0, p-1);

            }
            else
            {
                temp = sb3.substring(0, sb3.length()-1);

            }
            sb3 = new StringBuilder(temp);
            flameResult = sb3.charAt(0);

        }

        System.out.println("FLAMEL"+flameResult);



	}
}