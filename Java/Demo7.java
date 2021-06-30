class IronMan
{
	boolean SaveIronman(String s)
	{
		char a[]=s.toCharArray();
		int i,j=0;
		for(i=0;i<a.length;i++)
		{
			if(a[i]>=65&&a[i]<=95 || a[i]>=97&&a[i]<=122)
			{
				a[j]=a[i];
				if(a[i]>=65&&a[i]<=95)
				{
					a[j]=(char)(a[i]+32);
				}
				j++;
			}
		}

		i=0;
		j=j-1;
		while(i<j)
		{
			if(a[i++]!=a[j--])
			{
				return false;
			}
		}
       return true;
	}
}


class Demo7
{
	public static void main(String args[])
	{
		String s = "I am :IronnorI Ma, i";
		IronMan im = new IronMan();
		if(	im.SaveIronman(s))
		{
          System.out.println("Iron Man is Alive");
		}
		else
		{
			System.out.println("We are in EndGame!");
		}
	

	}
}