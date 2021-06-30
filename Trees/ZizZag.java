public class ZizZag 
{
    static class Node
    {
        int data;
        Node left,right;

        Node(int data)
        {
            this.data = data;
        }
    }

    static void bottomView(Node root)
    {
        int height = Height(root);
        System.out.println("HEIGHT:"+height);
        boolean check=false;


        for(int i=1;i<=height;i++)
        {
              bottom(root,i,check);
              check=!check;
        }
    }

    static void bottom(Node root,int level,boolean check)
    {
        if(root==null)
        {
            return;
        }

        if(level==1)
        {
            System.out.print(root.data+" ");
        }

        else if(level>1)
        {
            if(check!=false)
            {
                bottom(root.left, level-1, check);
                bottom(root.right,level-1,check);
            }
            else
            {
                bottom(root.right, level-1, check);
                bottom(root.left, level-1, check);
            }
        }
    }

    static int Height(Node root)
    {
        if(root==null)
        {
            return 0;
        }

        int lheight = Height(root.left);
        int rheight = Height(root.right);

        if(lheight>rheight)
        {
            return lheight+1;
        }
        else
        {
            return rheight+1;
        }
    }
    
    public static void main(String[] args) 
    {
        Node root = new Node(1);
        root.left= new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(7);
        root.left.right = new Node(6);
        root.right.left = new Node(5);
        root.right.right = new Node(4);

        bottomView(root);
        
    }
}
