import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map.Entry;

public class DiagonalTraversal
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

    static void diagonalPrint(Node root,int d,HashMap<Integer,ArrayList<Integer>> diag)
    {
        if(root==null)
        {
            return;
        }

        ArrayList<Integer> list = diag.get(d);

        if(list==null)
        {
            list = new ArrayList<>();
            list.add(root.data);
        }
        else
        {
            list.add(root.data);
        }

        diag.put(d,list);

        diagonalPrint(root.left, d-1, diag);
        diagonalPrint(root.right, d, diag);
    }



    public static void main(String args[])
    {
        Node root = new Node(8);
        root.left = new Node(3);
        root.right = new Node(10);
        root.left.left = new Node(1);
        root.left.right = new Node(6);
        root.right.right = new Node(14);
        root.right.right.left = new Node(13);
        root.left.right.left = new Node(4);
        root.left.right.right = new Node(7);

        HashMap<Integer,ArrayList<Integer>> diag = new HashMap<>();

        diagonalPrint(root,0,diag);

        System.out.println("Diagonal Traversal of Binary Tree:");
        for(Entry<Integer,ArrayList<Integer>> entry: diag.entrySet())
        {
            // for(Integer I:entry.getValue())
            // {
            //     System.out.println(I+" ");
            // }

            System.out.println(entry.getValue());
        }
         
    }


    
}
