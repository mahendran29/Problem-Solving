import java.util.*;

public class Implementation 
{
    static Scanner scan = new Scanner(System.in);
   

    static void readGraph(TreeMap<Integer,ArrayList<Integer>> graph,int n)
    {
          int i,j,k,val;
          for(i=0;i<n;i++)
          {
              System.out.println("Enter the number of neighbours of :"+(i+1));
              k=scan.nextInt();

              ArrayList<Integer> list = new ArrayList<>();

              for(j=0;j<k;j++)
              {
                  System.out.println("Enter the value of "+(j+1)+" neighbours of:"+(i+1));
                  val = scan.nextInt();
                  list.add(val);
                  graph.put(i,list);
              }
          }
    }

    static void printGraph(TreeMap<Integer,ArrayList<Integer>> graph,int n)
    {
                 for(Map.Entry<Integer,ArrayList<Integer>> entry: graph.entrySet())
                 {
                      int key = entry.getKey()+1; 
                      ArrayList<Integer> al = entry.getValue();
                   
                      System.out.print("The neighbours of "+key+" are:");
                    for(Integer i:al)
                    {
                        System.out.print(i+" ");
                    }

                    System.out.println();
                    System.out.println();

                 }
    }



    public static void main(String[] args) 
    {
        int nodes;
        System.out.println("Enter the number of nodes:");
        nodes = scan.nextInt();
        System.out.println("Number of nodes:"+nodes);

        TreeMap<Integer,ArrayList<Integer>> graph = new  TreeMap<>();

        readGraph(graph,nodes);
        printGraph(graph,nodes);

        
    }
    
}
