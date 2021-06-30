public class SameTree
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

    static boolean identical(Node root1,Node root2)
    {
         if(root1==null&&root2==null)
         {
             return true;
         }
         return (root1.data==root2.data)&&identical(root1.left,root2.left)&&identical(root1.right,root2.right);

    }

    public static void main(String args[])
    {
        Node root1 = new Node(1);
        root1.left = new Node(2);
        root1.right = new Node(3);
        
        
        Node root2 = new Node(1);
        root2.left = new Node(3);
        root2.right = new Node(3);

        System.out.println("Identical:"+identical(root1, root2));
    }
    
}
