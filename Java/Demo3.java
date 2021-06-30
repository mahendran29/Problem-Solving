import java.util.*;

class Anagram
{
	int NO_OF_CHARS = 26;
	public boolean isAnagram(char str1[],char str2[])
	{
            int i;
		
		int count1[] = new int[NO_OF_CHARS];
		Arrays.fill(count1,0);
		int count2[] = new int[NO_OF_CHARS];
		Arrays.fill(count2,0);
     

        for(i=0;i<str1.length&&i<str2.length;i++)
        {
        	count1[str1[i]-'a']++;
        	count2[str2[i]-'a']++;
         
         }

	    if(str1.length!=str2.length)
	    {
	    	return false;
	    }

	    for(i=0;i<26;i++)
	    {
	    	if(count1[i]!=count2[i])
	    	{
	    		return false;
	    	}
	    }

	    return true;

	 }
}



class Demo3
{
	public static void main(String args[])
	{
          String a = "geeksforgeeks";
          String b = "geeksforgeeks";

           char x[]=a.toCharArray();
           char y[]=b.toCharArray();



           Anagram an = new Anagram();
           if(an.isAnagram(x,y))
           {
           	System.out.println("Anagram");
           }
           else
           {
           	System.out.println("Not an Anagram");
           }

	}
}