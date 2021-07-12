import java.util.Iterator;
import java.util.LinkedList;

public class BFS
{
     int V;
     LinkedList<Integer> adh[];

    BFS(int v)
    {
        V=v;
        adh = new LinkedList[V];
        for(int i=0;i<V;i++)
        {
            adh[i]=new LinkedList<>();
        }
    }

     void addEdge(int v,int w)
    {
        adh[v].add(w);
    }

    void breadth(int s)
    {
        boolean visited[] = new boolean[V];

        LinkedList<Integer> queue = new LinkedList<>();
        queue.add(s);
        visited[s]=true;

        while(queue.size()!=0)
        {
            s = queue.poll();
            System.out.print(s+" ");

            Iterator<Integer> i = adh[s].listIterator();
            while(i.hasNext())
            {
                int n = i.next();
                if(!visited[n])
                {
                    queue.add(n);
                    visited[n]=true;
                }
            }
        }
    }

    public static void main(String args[])
    {
        BFS b = new BFS(4);
        b.addEdge(0,1);
        b.addEdge(0,2);
        b.addEdge(1,2);
        b.addEdge(2,0);
        b.addEdge(2,3);
        b.addEdge(3,3);

        b.breadth(2);
    }
    
}
