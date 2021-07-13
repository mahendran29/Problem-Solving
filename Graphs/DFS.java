import java.util.*;

public class DFS 
{
    int V;
    LinkedList<Integer> adj[];

    DFS(int c)
    {
        V=c;
        adj = new LinkedList[V];
        for(int i=0;i<V;i++)
        {
            adj[i]=new LinkedList<>();
        }
    }

    void addEdge(int v,int w)
    {
        adj[v].add(w);
    }

    void Depth(int s)
    {
        boolean visited[] = new boolean[V];
        Stack<Integer> stack = new Stack<>();
        stack.push(s);

        while(stack.empty()==false)
        {
            s = stack.pop();

            if(visited[s]==false)
            {
                System.out.print(s+" ");
                visited[s]=true;
            }

            Iterator<Integer> itr= adj[s].iterator();
            while(itr.hasNext())
            {
                int x = itr.next();
                if(!visited[x])
                {
                    stack.push(x);
                }
            }
        }

    }

    public static void main(String args[])
    {
        DFS g = new DFS(5);
        g.addEdge(0,1);
        g.addEdge(0,2);
        g.addEdge(0,3);
        g.addEdge(2,4);
     //   g.addEdge(1,4);

        g.Depth(0);
    }
    
}
