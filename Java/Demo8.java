class GoodString
{
	int GoodBad(String s)
	{
         char a[]=s.toCharArray();
         int i,vowels=0,conso=0,k=0;
         for(i=0;i<a.length;i++)
         {
         	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
         	{
         		vowels++;
         		conso=0;
         		System.out.println("1:"+(k++));
         	}
         	else if(!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='?'))
         	{
         		conso++;
         		vowels=0;
         		System.out.println("2:"+(k++));
         	}
         	else
         	{
         		conso++;
         		vowels++;
         		System.out.println("3:"+(k++));
         	}

         	if(conso>3 || vowels>5)
         	{
         		return 0;
         		
         	}
         }

        return 1;
	}
}



class Demo8
{
	public static void main(String args[])
	{
      String s = "aeioup??";
      GoodString gs = new GoodString();
      if(gs.GoodBad(s)==1)
      {
             System.out.println("Good String");
      }
      else
      {
      	System.out.println("Bad String");
      }
      
	}
}