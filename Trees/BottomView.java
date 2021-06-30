import java.util.*;
import java.util.Map.Entry;

public class BottomView
{
    static class Node
    {
        int data;
        int hd;
        Node left,right;

        Node(int data)
        {
            this.data=data;
            hd=Integer.MAX_VALUE;
        }
    }

    public static void bottomView(Node root)
    {
        Map<Integer,Integer> map = new TreeMap<>();

        Queue<Node> queue = new LinkedList<>();
        int hd=0;
        root.hd=hd;
        queue.add(root);


        while(!queue.isEmpty())
        {
            Node temp = queue.poll();

            hd = temp.hd;

            map.put(hd,temp.data);

            if(temp.left!=null)
            {
                temp.left.hd=hd-1;
                queue.add(temp.left);
            }

            if(temp.right!=null)
            {
                temp.right.hd=hd+1;
                queue.add(temp.right);
            }
        }

         Set<Entry<Integer,Integer>> set = map.entrySet();
        
        

        for(Map.Entry<Integer,Integer> me : set)
        {
            System.out.println(me.getValue()+" "+me.getKey());
        }
    }



    public static void main(String args[])
    {
        Node root = new Node(20);
        root.left= new Node(8);
        root.right= new Node(22);
        root.left.left= new Node(5);
        root.left.right= new Node(3);
        root.left.right.left= new Node(10);
        root.left.right.right= new Node(14);
        root.right.left=new Node(4);
        root.right.right= new Node(25);

        bottomView(root);
    }
}
