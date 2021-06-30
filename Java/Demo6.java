class Merge
{
	public String StringMerge(String str1,String str2)
	{
		char a[]=str1.toCharArray();
		char b[]=str2.toCharArray();

		int HASH[] = new int[a.length+b.length];

		int i=0,j=0,k=0;
		while(i<a.length && j<b.length)
		{
			HASH[k++]=a[i++];
			HASH[k++]=b[j++];
		}

		while(i<a.length)
		{
			HASH[k++]=a[i++];
		}

		while(j<b.length)
		{
			HASH[k++]=b[j++];
		}

		for(i=0;i<HASH.length;i++)
		{
			System.out.print((char)HASH[i]);
		}

		String x = String.valueOf(HASH);
		return x;


	}
}



class Demo6
{
	public static void main(String args[])
	{
		String a = "abc";
		String b = "def";

		Merge m = new Merge();
		m.StringMerge(a,b);
	}
}