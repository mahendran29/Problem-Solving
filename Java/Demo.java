class WaveArray
{
	void Wave(int a[])
	{
		int i;
		for(i=0;i<a.length-1;i+=2)
		{
			int temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}

		for(i=0;i<a.length;i++)
		{
			System.out.print(a[i]+" ");
		}

	}
}


class Demo
{
	public static void main(String args[])
	{
		 int a[]={2,4,7,8,9,10};
		 WaveArray wa = new WaveArray();
		 wa.Wave(a);
	}
}