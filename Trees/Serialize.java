import java.util.*;

public class Serialize
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


    static void Serializing(Node root,ArrayList<Integer> list)
    {
        if(root==null)
        {
            list.add(-1);
            return;
        }

        list.add(root.data);
        Serializing(root.left, list);
        Serializing(root.right, list);

    }
    static int deSerializeIndex = 0;
    public static  Node deSerialize(List<Integer> list) 
    {
        if (list.get(deSerializeIndex) == -1) 
        {
          deSerializeIndex++;
          return null;
        }
    
        Node newNode = new Node(list.get(deSerializeIndex++));
    
        newNode.left = deSerialize(list);
        newNode.right = deSerialize(list);
    
        return newNode;
      }


    static void inOrder(Node root)
    {
       if(root==null)
       {
           return;
       }

       inOrder(root.left);
       System.out.println(root.data);
       inOrder(root.right);
    }

    public static void main(String args[])
    {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        System.out.println("Before Serializing");
        inOrder(root);
        ArrayList<Integer> list = new ArrayList<Integer>();
        Serializing(root,list);
        System.out.println("After Serializing");
        Node temp = deSerialize(list);
        inOrder(temp);
    }



}