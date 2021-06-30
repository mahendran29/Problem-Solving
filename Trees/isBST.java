public class isBST 
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

    static boolean iBST(Node root,Node l,Node r)
    {
        if(root==null)
        {
            return true;
        }

        if(l!=null && root.data<=l.data)
        {
            return false;
        }

        if(r!=null && root.data>=r.data)
        {
            return false;
        }

        return iBST(root.left, l, root) && iBST(root.right,root, r);
    }

    static boolean BST(Node root)
    {
        return iBST(root,null,null);
    }


    public static void main(String args[])
    {
        Node root = new Node(4);
        root.left = new Node(10);
        root.right= new Node(6);

        boolean val=BST(root);
        System.out.println(val);
    }
    
}
