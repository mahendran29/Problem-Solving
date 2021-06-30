import java.util.*;


public class BinaryTree 
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

     static Scanner scan = new Scanner(System.in);
    public static Node Create()
    {
        int val;
        System.out.println("Value:");
        val = scan.nextInt();
        if(val==-1)
        {
            return null;
        }
         
        Node node = new Node(val);
        System.out.println("Enter left child of"+val);
        node.left=Create();
        System.out.println("Enter right child of"+val);
        node.right=Create();
 
        return node;
    }

    static void inOrder(Node root)
    {
        if(root==null)
        {
            return;
        }

        inOrder(root.left);
        System.out.print(root.data);
        inOrder(root.right);

    }
    public static void main(String args[])
    {
         Node root = null;
         root=Create();

         System.out.println("The elements in the Binary Tree using Inorder Traversal are:");
         inOrder(root);
    }
    
}
