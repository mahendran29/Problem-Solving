import java.util.*;

public class LeftView
{ 
    static class Node
    {
        int data;
        Node left,right;

        Node(int data)
        {
            this.data=data;
        }

    }

    static void leftView(Node root)
    {
        int i;
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);
        
        while(!queue.isEmpty())
        {
            int n = queue.size();
            for(i=1;i<=n;i++)
            {
                Node temp = queue.poll();
                if(i==1) // if i==n then we can get the right view of the tree
                {
                    System.out.println(temp.data+" ");
                }

                if(temp.left!=null)
                {
                    queue.add(temp.left);
                }

                
                if(temp.right!=null)
                {
                    queue.add(temp.right);
                }
            }

        }
    }


    public static void main(String args[])
    {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right= new Node(3);
        root.left.right=new Node(4);
        root.left.right.right=new Node(5);
        root.left.right.right.right=new Node(6);

        leftView(root);
    }
    
}
