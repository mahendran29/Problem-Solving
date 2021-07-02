import java.util.*;

public class TreeFromInAndPre
 {
    static class Node 
    {
        int data;
        Node left,right;

        Node(int data)
        {
            this.data = data;
            left=right=null;
        }
    }

    static Node Build(int pre[],int in[])
    {
        int preIndex=0,inIndex=0,flag=0;
        Node root=null,prev=null;
        Node node=null;

        root=prev=new Node(pre[0]);
        preIndex++;

        Stack<Node> stack = new Stack<>();

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

    public static void main(String args[])
    {
        int pre[]={3,9,20,15,7};
        int in[]={9,3,15,20,7};
        

        Node root = Build(pre,in);

        PreOrder(root);
    }

}
