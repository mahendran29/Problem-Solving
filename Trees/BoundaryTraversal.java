public class BoundaryTraversal 
{
    static class Node
    {
        char data;
        Node left,right;

        Node(char data)
        {
            this.data=data;
        }
    }


    static void LeftBoundary(Node root)
    {
        if(root==null)
        {
            return;
        }

        if(root.left!=null)
        {
            System.out.println(root.data+" ");
            LeftBoundary(root.left);
        }
        else if(root.right!=null)
        { 
            System.out.println(root.data+" ");
            LeftBoundary(root.right);
         }
    }

    static void RightBoundary(Node root)
    {
        if(root==null)
        {
            return;
        }

        if(root.right!=null)
        {
            RightBoundary(root.right);
            System.out.println(root.data+" ");
        }
        else if(root.left!=null)
        {
            RightBoundary(root.left);
            System.out.println(root.data+" ");
        }
    }

    static void LeafNodes(Node root)
    {
        if(root==null)
        {
            return;
        }

        LeafNodes(root.left);
        if(root.left==null && root.right==null)
        {
             System.out.println(root.data+" ");
        }
        LeafNodes(root.right);
    }


    static void Boundary(Node root)
    {
        System.out.println(root.data+" ");
        LeftBoundary(root.left);
        LeafNodes(root.left);
        LeafNodes(root.right);
        RightBoundary(root.right);
    }

    public static void main(String args[])
    {
        Node root = new Node('A');
        root.left = new Node('D');
        root.right = new Node('Z');
        root.left.left = new Node('H');
        root.left.right = new Node('L');
        root.left.left.right= new Node('K');
        root.left.left.right.left = new Node('N');
        root.left.right.right= new Node('P');
        root.right.left = new Node('M');
        root.right.right = new Node('C');
        root.right.right.left = new Node('B');
        root.right.right.left.left = new Node('R');

        Boundary(root);
    }
    
}
