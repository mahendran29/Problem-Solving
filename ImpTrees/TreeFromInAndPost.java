import java.util.*;
public class TreeFromInAndPost
{
    static class Node
    {
        char data;
        Node left;
        Node right;
        Node(char data)
        {
            this.data=data;
        }
    }


    static Node Build(char in[],char post[])
    {
        int inIndex,postIndex,flag=0;
        inIndex=postIndex=in.length-1;
        Node root=null,temp=null,node=null;

        Stack<Node> stk = new Stack<>();
        temp=root=new Node(post[postIndex]);
        postIndex--;

        while(postIndex>=0)
        {
            if(!stk.isEmpty() && in[inIndex]==stk.peek().data)
            {
                temp = stk.pop();
                inIndex--;
                flag=1;
            }
            else
            {
                node = new Node(post[postIndex]);
                if(flag==0)
                {
                    temp.right=node;
                    temp=temp.right;
                  
                }
                else
                {
                    temp.left=node;
                    temp=temp.left;
                    flag=0;
                }

                stk.add(node);
                --postIndex;
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
       
        PreOrder(temp.left);
        PreOrder(temp.right);
        System.out.print(temp.data+" ");
    }


    public static void main(String args[])
    {
        char in[]={'H','D','P','L','A','Z','C','E'};
        char post[]={'H','P','L','D','E','C','Z','A'};

        Node root = Build(in,post);

        PreOrder(root);

    }

    
}
