public class Duplicates 
{
    public static void main(String[] args) {
    
         String S ="gfg";
         int hash[]= new int[256];
         char fin[]= new char[S.length()];
         int k=0;
         for(int i=0;i<S.length();i++)
         {
             hash[S.charAt(i)]++;
         }
         
        
     
         for(int i=0;i<S.length();i++)
         {
             if(hash[S.charAt(i)]>=1)
             {
                 hash[S.charAt(i)]=0;
                 fin[k]=S.charAt(i);
                 k++;
             }
         }

         
         String str = new String(fin);
         System.out.println("STRING:"+str);
     }
    
}
