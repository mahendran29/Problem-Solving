import java.util.*;

class Random
{
  static class Node
  {
    char data;
    Node left;
    Node right;

    Node (char data)
    {
      this.data = data;
    }
  }

static Node build(char in[], char pre[])
{
    int inindex = 0; 
    int preindex = 0;
    int flag = 0;
    Stack<Node> stk = new Stack<>();
    Node root = null;
    Node prev = null;
    Node node=null;

    root  = prev = new Node(pre[preindex]);
    preindex++;
    stk.push(root);

    while(preindex < pre.length)
    {
      if(!stk.isEmpty() && in[inindex] == stk.peek().data)
      {
        prev = stk.pop();
        inindex++;
        flag = 0;
      }
      else
      {
         node = new Node(pre[preindex]);
         
          if(flag == 0)
          {
            prev.left = node;
            prev = prev.left;
          }
          else
          {
            prev.right = node;
            prev = prev.right;
            flag = 1;
          }
          stk.add(node);
          preindex++;
      }
    }
    return root;
}

public static void inorder(Node root)
{
  if(root == null)
  {
    return;
  }

  inorder(root.left);
  System.out.println(root.data + " ");
  inorder(root.right);
}


  public static void main(String args[])
  {
    char[] inorder = {'H','D', 'P','L','A','Z','C','E'};
    char[] preorder = {'A','D','H','L','P','Z','C','E'};

    Node root = build(inorder, preorder);

    inorder(root);
  }
}