import java.util.*;

public class ConnectNodeInSameLevel
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


    public static void NodesSameLevel(Node root)
    {
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);
        queue.add(null);
        queue.add(root);
        queue.add(null);


        for(Node val:queue)
        {
            System.out.println(val.data+" ");
        }


    }


    public static void main(String args[])
    {
        Node root = new Node(10);
        root.left=new Node(20);
        root.right=new Node(30);
        root.left.left=new Node(40);
        root.left.right=new Node(60);


        NodesSameLevel(root);

    }

    
}
