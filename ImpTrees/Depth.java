public class Depth 
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

    static int DepthTree(Node root)
    {
        if(root==null)
        {
            return 0;
        }

        int lDepth = DepthTree(root.left);
        int rDepth = DepthTree(root.right);

        if(lDepth>rDepth)
        {
            return lDepth+1;
        }
        else
        {
            return rDepth+1;
        }

    }


    public static void main(String args[])
    {
        Node root = new Node(3);
        root.left = new Node(2);
        root.right = new Node (5);
        root.left.left = new Node(2);

        System.out.println(DepthTree(root));
        
    }
    
}
