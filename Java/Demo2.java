class Palindrome
{
    int isPalindrome(String s)
    {
    	int i=0;
    	int j = s.length()-1;
    	while(i<j)
    	{
    		if(s.charAt(i)!=s.charAt(j))
    		{
    			return 0;
    		}
    		i++;
    		j--;
    	}
    	return 1;

    }
}


class Demo2
{
	public static void main(String args[])
	{
		String s ="abca";
        Palindrome d = new Palindrome();
        System.out.println("Palindrome:"+d.isPalindrome(s));
	}
}