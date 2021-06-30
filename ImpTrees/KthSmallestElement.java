import java.util.*;


public class KthSmallestElement 
{

    public static class Node
    {
        int data;
        Node left;
        Node right;
        Node(int data)
        {
            this.data=data;
            left=right=null;
        }
    }

     static int count=0;
     static int res=-1;
    static void kthSmall(Node root,int k)
    {
        if(root==null)
        {
            return;
        }
       
        kthSmall(root.left,k);
        count++;
        if(count==k)
        {
            res = root.data;
            return;
        }

        kthSmall(root.right, k);
    }
    public static void main(String[] args) 
    {
        Node root = new Node(2);
        root.left = new Node(1);
        root.right = new Node(3);
        root.right.right= new Node(4);
        
        
         kthSmall(root,1);
         System.out.println("Val: "+res);
    }
    
}