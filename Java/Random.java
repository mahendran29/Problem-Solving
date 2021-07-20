class Random
{
    static class Node
    {
        int data;
        Node left,right;

    }

    static boolean BST(Node root,Node left,Node right)
    {
        if(root==null)
        {
            return true;
        }
        else if(left!=null && root.data <= left.data )
        {
           return false;
        }
        else if(right!=null && root.data>right.data)
        {
               return false;
        }

        return BST(root.left,left,root) && BST(root.right,root,right);
    }


    public static void main(String[] args)
     {
        Node root = new Node(4);
        root.left = new Node(10);
        root.right= new Node(6);

        boolean val=BST(root);
        System.out.println(val)
    }
}