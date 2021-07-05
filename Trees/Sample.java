import java.util.Stack;

public class Sample 
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

    static Node Construct(int pre[],int in[])
    {
        int inIndex=0,preIndex=0;
        Node root=null,prev=null;
        Node node=null,flag=0;

        Stack<Node> stk = new Stack<>();
        root=prev=new Node(in[inIndex]);
        preIndex++;
        while(preIndex<pre.length)
        {
            if(!stk.isEmpty()&&in[inIndex]==stk.peek().data)
            {
                prev=stk.pop();
                inIndex++;
                flag=1;
            }
            else
            {
                node = new Node(pre[preIndex]);
                if(flag==0)
                {
                     prev.left=node;
                     prev=prev.next;
                }
                else
                {
                    prev.right=node;
                    prev=prev.right;
                    flag=1;
                }

                stk.add(node);
                preIndex++;
            }

            return root;
        }
          

        return root;
    }

    public static void main(String args[])
    {
        int pre[]={3,9,20,15,7};
        int in[]={9,3,15,20,7};

        Construct(pre,in);
    }
    
}
