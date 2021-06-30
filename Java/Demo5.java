class SortDesc
{
	void Descending(String s)
	{
        char arr[]=s.toCharArray();
        int HASH[]=new int[26];
        char b[] = new char[arr.length]; 

        int i,j,k=0;
        for(i=0;i<arr.length;i++)
        {
            HASH[arr[i]-'a']++;
        }
 
        for(i=25;i>=0;i--)
        {
        	if(HASH[i]>0)
        	{
        		 for(j=0;j<HASH[i];j++)
        	  {
        		    b[k++]=(char)('a'+i);
        	   }
        	}
        	
        }

        String str = String.valueOf(b);
        System.out.println(str);

	}
}



class Demo5
{
	public static void main(String args[])
	{
		String s = "for";
		SortDesc sd = new SortDesc();
		sd.Descending(s);
	}
}