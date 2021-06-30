

public class CheckBst 
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

    static boolean isBst(Node root,Node left,Node right)
    {
        if(root==null)
        {
            return true;
        }

        else if(left!=null && left.data>=root.data)
        {
            return false;
        }
        else if(right!=null && right.data<=root.data)
        {
            return false;
        }

        return isBst(root.left, left,root)&&isBst(root.right,root,right);
    }

    public static void main(String args[])
    {
        Node root = new Node(2);
        root.left = new Node(1);
        root.right = new Node(3);

        System.out.println("IsBst: "+isBst(root,null,null));
    }
    
}
