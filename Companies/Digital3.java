class Digital3
{
	public static void main(String[] args) 
	{
		int suml=0,sumr=0,i;

		int a[][]={{1,2,3},{4,5,6},{9,8,9}};
		for(i=0;i<3;i++)
		{
			suml+=a[i][i];
			sumr+=a[i][3-i-1];
		}

		 int sum = suml-sumr;
   if(sum<0)
      sum*=-1;

  System.out.println("SUM:"+sum);

		
       

		
	}
}