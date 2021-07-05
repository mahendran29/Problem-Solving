import java.util.*;

public class TreeFromInAndPre
 {
    static class Node 
    {
        char data;
        Node left,right;

        Node(char data)
        {
            this.data = data;
            left=right=null;
        }
    }

    static Node Build(char pre[],char in[])
    {
        int preIndex=0,inIndex=0,flag=0;
        Node root=null,prev=null;
        Node node=null;

        root=prev=new Node(pre[0]);
        preIndex++;

        Stack<Node> stack = new Stack<>();
        stack.push(root);

        while(preIndex<pre.length)
        {
             if(!stack.isEmpty()&& in[inIndex]==stack.peek().data)
             {
                 prev = stack.pop();
                 ++inIndex;
                 flag=1;      
             }
             else
             {
                 node = new Node(pre[preIndex]);
                 if(flag==0)
                 {
                     prev.left=node;
                     prev=prev.left;
                 }
                 else
                 {
                     prev.right=node;
                     prev=prev.right;
                     flag=0;
                 }

                 stack.add(node);
                 ++preIndex;

             }
        }

        return root;

    }

    static void PreOrder(Node temp)
    {
        if(temp==null)
        {
            return;
        }
        System.out.print(temp.data+" ");
        PreOrder(temp.left);
        PreOrder(temp.right);
    }
    static void InOrder(Node temp)
    {
        if(temp==null)
        {
            return;
        }
        InOrder(temp.left);
        System.out.print(temp.data+" ");
        InOrder(temp.right);
    }

    public static void main(String args[])
    {
        char[] in = {'H','D','P','L','A','Z','C','E'};
        char[] pre = {'A','D','H','L','P','Z','C','E'};
        

        Node root = Build(pre,in);

        System.out.println("Tree Constructed\n\nPreOrder:");
        PreOrder(root);
        System.out.println("\nInOrder:");
        InOrder(root);
    }

}
