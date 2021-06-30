import java.util.*;

class BFS
{
    static int V;
    static LinkedList<Integer> adj[];

    BFS(int v)
    {
        V=v;
        adj= new LinkedList[V];
        for(int i=0;i<v;i++)
        {
            adj[i]=new LinkedList();
        }
    }

    static void addEdge(int v,int w)
    {
        adj[v].add(w);
    }


    static void Breadth(int e)
    {
         LinkedList<Integer> queue = new LinkedList<>();
         boolean checked[] = new boolean[V];

         checked[e]=true;
         queue.add(e);

         while(!queue.isEmpty())
         {
             e = queue.poll();
             System.out.println(e+" ");

             ListIterator<Integer> list = adj[e].listIterator();

             while(list.hasNext())
             {
                 int n = list.next();
                 if(!checked[n])
                 {
                     checked[n]=true;
                     queue.add(n);
                 }
             }
         }
    }

    public static void main(String args[])
    {
        BFS g = new BFS(4);
        addEdge(0, 1);
        addEdge(0, 2);
        addEdge(1, 2);
        addEdge(2, 0);
        addEdge(2, 3);
        addEdge(3, 3);

        Breadth(2);
    }
}