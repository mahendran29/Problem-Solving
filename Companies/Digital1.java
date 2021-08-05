import java.util.*;

class Digital1
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		int teams,i;
		String matchInfo;
		char Home,Away;
		teams = scan.nextInt();
		scan.nextLine();
		System.out.println("Number of teams:"+teams);

		int scores[] = new int[teams];
		for(i=0;i<((teams*(teams-1))/2);i++)
		{
             matchInfo = scan.nextLine();
             Home = matchInfo.charAt(0);
             Away = matchInfo.charAt(2); 

             String scorehome="";
             String scoreaway="";
             int j=4;

             while(matchInfo.charAt(j)!='-')
             {
             	scorehome+=matchInfo.charAt(j);
             	j++;
             }

             int x = Integer.parseInt(scorehome);
             j++;

             while(j<matchInfo.length())
             {
             	scoreaway+=matchInfo.charAt(j);
             	j++;
             }

             int y = Integer.parseInt(scoreaway);

             if(x<y)
             {
             	scores[Away-'A']+=3;
             }
             else if(x==y)
             {
             	scores[Away-'A']+=1;
             	scores[Home-'A']+=1;
             }
             else
             {
             	scores[Home-'A']+=3;
             }
             
		}

		int index=-1;
		int maxv = Integer.MIN_VALUE;

		for(i=0;i<teams;i++)
		{
			if(scores[i]>maxv)
			{
				maxv = scores[i];
				index = i;
			}
		}

		System.out.println("Winner:"+(char)('A'+index));
    }
}