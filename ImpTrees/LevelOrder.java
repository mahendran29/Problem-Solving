import java.util.*;

public class LevelOrder 
{
    static class Node
    {
        int data;
        Node left;
        Node right;

        Node(int data)
        {
            this.data=data;
        }
    }


    static void Level(Node root)
    {
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);

        while(!queue.isEmpty())
        {
            Node temp = queue.poll();
            System.out.print(temp.data);

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

    public static void main(String[] args) 
    {
        Node root = new Node(3);
        root.left=new Node(1);
        root.right=new Node(2);
        root.left.left =new Node(4);
        root.right.right =new Node(5);

        Level(root);
    }
    
}
