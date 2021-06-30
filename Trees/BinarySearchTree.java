public class BinarySearchTree 
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

    public static Node Create(Node root,int data)
    {
        if(root==null)
        {
             return new Node(data);
        }

        else if(data<=root.data)
        {
            root.left=Create(root.left,data);
        }

        else if(data>=root.data)
        {
            root.right=Create(root.right,data);
        }

        return root;
    }

    static void Inorder(Node root)
    {
        if(root==null)
        {
            return;
        }

        Inorder(root.left);
        System.out.print(root.data);
        Inorder(root.right);
    }
    

    public static void main(String args[])
    {
        Node root=null;
        root=Create(root,3);
        root=Create(root,1);
        root=Create(root,4);
        root=Create(root,6);
        root=Create(root,7);
        root=Create(root,2);
        root=Create(root,8);
        root=Create(root,5);
        root=Create(root,9);
        root=Create(root,10);

        Inorder(root);

    }
}
